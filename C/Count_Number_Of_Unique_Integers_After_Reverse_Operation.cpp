// Count number of unique integers after reverse operation
// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/
// Aman Kumar

// Runtime 319 ms Beats 96.36%
// Memory 248.3 MB Beats 5.36%
// Method to get reverse of a number
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
    vector<int> freq(1000001,0);

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] ]++ ;

        int rev = getReverse( nums[i] ) ;

        freq[ rev ]++ ;
    }    

    int count = 0 ;

    // Iterate and count the elements which have freq >= 1
    for( int i = 1 ; i < 1000001 ; i++ )
    {
        if( freq[i] >= 1 )
            count++ ;
    }

    return count ;
}
