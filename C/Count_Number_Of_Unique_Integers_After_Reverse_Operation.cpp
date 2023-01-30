// Count number of unique integers after reverse operation
// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/
// Aman Kumar

// Runtime 193 ms Beats 98.53%
// Memory 60.6 MB Beats 96.68%

int getReverse(int n)
{
    int num = 0 ;

    while( n > 0 )
    {
         num = num * 10 + (n % 10) ;
         n /= 10 ;
    }

    return num ;
}

int countDistinctIntegers(vector<int>& nums) 
{
    // Array to store the frequency of elements
    vector<bool> freq(1000001,0);

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] ] = 1 ;

        int rev = getReverse( nums[i] ) ;

        freq[ rev ] = 1 ;
    }    

    int count = 0 ;

    // Iterate and count the elements which have freq >= 1
    for( int i = 1 ; i < 1000001 ; i++ )
    {
        if( freq[i] )
            count++ ;
    }

    return count ;
}
