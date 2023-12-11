// Find element appearing more than 25% in sorted array
// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
// Aman Kumar

// Runtime 6ms Beats92.41%of users with C++
// Memory 12.90MB Beats57.06%of users with C++
int findSpecialInteger(vector<int>& arr) 
{
    int count = 0 ;
    int maxCount = 0 ;
    int maxVal = 0;
    int n = arr.size() ;

    int start = 0, end = 0;

    while(start < n)
    {
        count = 0 ;
        while(end < n && arr[start] == arr[end])
        {
            count++ ;
            end++ ;
        }

        if(count > maxCount)
        {
            maxCount = count ;
            maxVal = arr[start] ;

            if(maxCount > (n/4))
                return maxVal ;
        }
        start = end ;
    }

    return maxVal ;
}
