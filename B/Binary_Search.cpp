// Do binary search on sorted array for target value
// https://leetcode.com/problems/binary-search/
// Aman Kumar

int search(vector<int>& nums, int target) 
{
    int l = 0, r = nums.size()-1 ;
    int ret = -1 ;

    if( nums.size() == 1 && nums[0] == target )
        return 0 ;

    while( l <= r && ret == -1 )
    {
        int mid = l + (r-l)/2 ;

        if( nums[ mid ] == target )
            ret = mid ;
        else if( nums[ mid ] > target )
            r = mid -1 ;
        else
            l = mid +1 ;
    }

    return ret ;
/*
[-1,0,3,5,9,12]
9
[-1,0,3,5,9,12]
2
[5]
5
[5]
0
[2,5]
5
[2,5]
2
*/
}
