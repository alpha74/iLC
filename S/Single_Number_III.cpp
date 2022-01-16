// Find 2 non-repeating elements in array of twice repeating elements
// https://leetcode.com/problems/single-number-iii/
// Aman Kumar

vector<int> singleNumber(vector<int>& nums) 
{
    long long int bitmask = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        bitmask = bitmask ^ nums[i] ;
    }

    long long int new_bitmask = bitmask & (-bitmask) ;
    int x1 = 0, x2 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( new_bitmask & nums[i] )
            x1 = x1 ^ nums[i] ;
        else    
            x2 = x2 ^ nums[i] ;
    }

    vector<int> ret ;
    ret.push_back( x1 ) ;
    ret.push_back( x2 ) ;

    return ret ;
/*
[1,1,0,-2147483648]

*/
}
