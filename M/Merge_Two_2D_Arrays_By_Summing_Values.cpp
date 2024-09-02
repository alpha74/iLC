// Merge two 2D arrays based on index values
// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/
// Aman Kumar

// Runtime 3ms Beats 96.14%
// Memory 13.65MB Beats 82.94%
vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
{
    vector<vector<int>> ret;
    int n = nums1.size();
    int m = nums2.size();

    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(nums1[i][0] == nums2[j][0])
        {
            ret.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
            i++;
            j++;
        }
        else if(nums1[i][0] < nums2[j][0])
        {
            ret.push_back(nums1[i]);
            i++ ;
        }
        else
        {
            ret.push_back(nums2[j]);
            j++;
        }
    }

    while(i < n)
        ret.push_back(nums1[i++]);

    while(j < m)
        ret.push_back(nums2[j++]);

    return ret;
}
