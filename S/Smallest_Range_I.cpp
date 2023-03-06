// Return min diff between min and max val in array by performing exactly one [-k,k] addition
// https://leetcode.com/problems/smallest-range-i/description/
// Aman Kumar

// Runtime 10 ms Beats 97.46%
// Memory 15.5 MB Beats 59.66%
int smallestRangeI(vector<int>& nums, int k) 
{
    int minVal = *min_element( nums.begin(), nums.end() ) ;
    int maxVal = *max_element( nums.begin(), nums.end() ) ;

    if(( maxVal-k - (minVal + k) ) >= 0 )
        return maxVal-k - (minVal + k) ;

    // Difference becomes -ve which is not correct answer
    return 0 ;
/*
[9,9,2,8,7]
4

[3021,654,5072,9812,4636,3970,2381,1979,9794,4032]
4121
*/
}
