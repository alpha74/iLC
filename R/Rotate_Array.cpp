// Rotate array to right by K
// https://leetcode.com/problems/rotate-array/
// Aman Kumar

void rotate(vector<int>& nums, int k) 
{
    /*
        1. Reverse the array
        2. Reverse from 0 to k
        3. Reverse from k+1 to end
    */
    int len = nums.size() ;
    k = k % len ;

    for( int i = 0 ; i < len/2 ; i++)
    {
        int temp = nums[i] ;
        nums[i] = nums[ len -i -1 ];
        nums[ len -i -1] = temp ;
    }

    for( int i = 0 ; i < k/2 ; i++)
    {
        int temp = nums[i] ;
        nums[i] = nums[ k -i -1 ];
        nums[ k -i -1] = temp ;
    }

    int run = (len-k)/2 ;

    for( int i = 0 ; i < run ; i++ )
    {
        int temp = nums[ k + i] ;
        nums[k+i] = nums[ len -i -1 ];
        nums[ len -i -1] = temp ;   
    }
}
