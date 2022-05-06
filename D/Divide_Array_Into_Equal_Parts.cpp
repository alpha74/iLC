// Divide array into equal parts
// https://leetcode.com/problems/divide-array-into-equal-pairs/
// Aman Kumar

bool divideArray(vector<int>& nums) 
{
    vector<int> freq( 501, 0) ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] ]++ ;
    }

    for( int i = 0 ; i < freq.size() ; i++ )
    {
        if( freq[i] % 2 != 0 )
            return false ;
    }
    return true ;
}
