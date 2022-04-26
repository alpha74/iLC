// Return smallest window having highest degree
// https://leetcode.com/problems/degree-of-an-array/
// Aman Kumar

int findShortestSubArray(vector<int>& nums) 
{
    if( nums.size() == 1 )
        return 1 ;

    vector<int> freq(50001,0) ;
    unordered_map<int,pair<int,int>> pos ;  // First and Last index of an element

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        // Store freq
        freq[ nums[i] ]++ ;

        auto iter = pos.find( nums[i] ) ;
        if( iter != pos.end() )
        {
            // Store last known occurence index
            (iter -> second).second = i ;
        }
        else
        {
            pos[ nums[i] ] = { i, i } ;
        }
    }

    int deg = 0 ;

    // Find highest degree
    for( int i = 0 ; i < 50001 ; i++ )
    {
        deg = max( deg, freq[i] ) ;
    }

    int minlen = INT_MAX ;

    // Find num with smallest window
    for( auto iter = pos.begin() ; iter != pos.end() ; iter++ )
    {
        if( freq[ iter -> first ] == deg )
        {
            pair<int,int> index = iter -> second ;

            minlen = min( minlen, index.second - index.first +1 ) ;        
        }
    }

    return minlen ;
/*
[1,2,2,3,1,1,2,2,3,1]
[1]
[1,2]
[1,2,1,2]
[1,2,2,3,3,31,4,2]
[1,1,1]
[1,2,2]
*/
}
