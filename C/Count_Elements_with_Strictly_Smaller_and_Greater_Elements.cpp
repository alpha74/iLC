// Count number of element hacing strictly greater and smaller elements
// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/
// Aman Kumar

// Runtime 2 ms Beats 85.22%
// Memory 9.2 MB Beats 54.9%
int countElements(vector<int>& nums) 
{
    sort(nums.begin(), nums.end() ) ;

    int count = 0 ;

    for( int i = 1 ; i < nums.size()-1 ; i++ )
    {
        if( nums[i] > nums[i-1] )
        {
            int curr = nums[i] ;

            // Count number of curr
            int j = i+1 ;
            int freq = 1;

            while( j < nums.size() && nums[j] == curr )
            {
                j++ ;
                freq++ ;
            }

            if( j-1 < nums.size() -1)
                count += freq ;
        }
    }

    return count ;
}
