// Return Maximum number of pairs and Leftover in an array
// https://leetcode.com/problems/maximum-number-of-pairs-in-array/description/
// Amamn Kumar

// Runtime 0 ms Beats 100%
// Memory 9.3 MB Beats 53.85%
vector<int> numberOfPairs(vector<int>& nums) 
{
    vector<int> freq(101,0) ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] ]++ ;
    }    

    int pairs = 0;
    int left = 0 ;

    for( int i = 0 ; i < 101 ; i++ )
    {
        int f = freq[ i ] ;

        f = f / 2 ;
        pairs += f ;

        freq[i] = freq[i] - (f*2) ;

        left += freq[i] ;
    }

    return { pairs, left} ;
}
