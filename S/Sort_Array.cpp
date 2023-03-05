// Sort given array in O(nlogn)
// https://leetcode.com/problems/sort-an-array/description/
// Aman Kumar

// Runtime 233 ms Beats 46.31%
// Memory 61.3 MB Beats 82.70%
void maxHeapify(vector<int>& nums, int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1, right = (2 * i) + 2;

    if(left < n && nums[left] > nums[largest])
        largest = left;

    if(right < n && nums[right] > nums[largest])
        largest = right;

    if(largest != i)
    {
        swap(nums[largest], nums[i]);
        maxHeapify(nums, n, largest);
    }
}

void heapSort(vector<int>& nums, int n)
{
    for(int i = n/2-1; i >= 0; i--)
        maxHeapify(nums, n, i);

    for(int i = n-1; i >= 0; i--)
    {
        swap(nums[0], nums[i]);
        maxHeapify(nums, i, 0);
    }
}

vector<int> sortArray(vector<int>& nums) 
{
    heapSort(nums, nums.size());
    return nums;
}
