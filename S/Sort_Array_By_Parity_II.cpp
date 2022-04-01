// Sort array such that even numbers are present at even i, and vice versa
// https://leetcode.com/problems/sort-array-by-parity-ii/
// Aman Kumar

vector<int> sortArrayByParityII(vector<int>& nums) 
{
    vector<int> ret( nums.size(), 0 );

    int eIndex = 0 ;
    int oIndex = 1 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] % 2 == 0 )
        {
            ret[ eIndex ] = nums[i] ;
            eIndex += 2 ;
        }
        else
        {
            ret[ oIndex ] = nums[i] ;
            oIndex += 2 ;
        }
    }

    return ret ;
}
