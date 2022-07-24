// Sum of elements having freq = 1 
// https://leetcode.com/problems/sum-of-unique-elements/
// Aman Kumar

int sumOfUnique(vector<int>& nums) 
{
    vector<int> freq(101,0) ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] ]++ ;
    }

    int sum = 0 ;

    for( int i = 1 ; i <= 100 ; i++ )
    {
        if( freq[ i ] ==  1)
            sum += i ;
    }

    return sum ;
}
