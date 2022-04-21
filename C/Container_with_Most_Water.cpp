// Given array of heights, determine max water which can be held.
// https://leetcode.com/problems/container-with-most-water/
// Aman Kumar

int maxArea(vector<int>& height) 
{
    int i = 0, j = height.size()-1 ;
    long long int ret = 0 ;

    while( i < j )
    {
        int curr = min( height[i], height[j] ) * (j-i) ;

        if( curr > ret )
            ret = curr ;

        if( height[i] < height[j] )
            i++ ;
        else
            j-- ;
    }

    return ret ;
}
