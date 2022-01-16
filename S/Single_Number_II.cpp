// Find non-repeating element in array of thrice repeating elements
// https://leetcode.com/problems/single-number-ii/
// Aman Kumar

int singleNumber(vector<int>& nums) 
{   
    long long int res = 0 ;

    for( int b = 0 ; b < 32 ; b++ )
    {
        int count = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ )
        {
            int andVal = nums[i] & 1 ;
            if( andVal )
                count++ ;

            nums[i] = nums[i] >> 1 ;
        }

        if( count % 3 != 0 )
            res = res + pow(2, b) ;
    }
    return res ;

    /*
TC

[2,2,3,2]
[0,1,0,1,0,1,99]
[0,0,0,1]
[3,2,2,3,0,2,3]
[30000,500,100,30000,100,30000,100]
[-2,-2,1,1,4,1,4,4,-4,-2]
    */
}
