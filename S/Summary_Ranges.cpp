// Print start and end on consucutive numbers in a sorted array
// https://leetcode.com/problems/summary-ranges/
// Aman Kumar

vector<string> summaryRanges(vector<int>& nums) 
{
    vector<string> ret ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        int start = nums[i] ;
        int end = -1 ;
        bool endFound = false ;

        string row ;

        i++ ;
        while( i < nums.size() && nums[i] -1 == nums[i-1] )
        {
            endFound = true ;
            end = nums[i] ;
            i++ ;
        }
        i-- ;

        if( endFound )
        {
            row += to_string( start ) ;
            row += "->" ;
            row += to_string( end ) ;
        }
        else
            row = to_string(start) ;

        ret.push_back( row ) ;
        row = "" ;
    }
    return ret ;
/*
[0,1,2,4,5,7]
[0,2,3,4,6,8,9]
[1,2,3]
[1]
[1,3,5]
[-2,-1,1,2,2147483646,2147483647]
*/
}
