// Return Bitwise XOR of pairs of two arrays
// https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/
// Aman Kumar

// Runtime 218 ms Beats 5.4%
// Memory 72.4 MB Beats 5.4%
 int getXor(vector<int> &nums)
{
    unordered_map<int,int> freq ;

    for(int i = 0 ; i < nums.size() ; i++)
        freq[ nums[i] ]++ ; 

    int ret = 0 ;
    //cout << "\n len: " << nums.size() ;

    for(auto it = freq.begin() ; it != freq.end() ; it++)
    {
        if((it -> second % 2) != 0)
            ret = ret ^ (it -> first) ;

        //cout << "\n ret: " << ret ;
    }

    return ret ;
}

int xorAllNums(vector<int>& nums1, vector<int>& nums2) 
{
    int n = nums1.size() ;
    int m = nums2.size() ;

    if(n % 2 == 0 && m % 2 == 0)
        return 0 ;

    if(m % 2 == 0)
        return getXor(nums2) ;

    else if(n % 2 == 0)
        return getXor(nums1) ;

    // Both are odd length
    int ret = 0 ;

    unordered_map<int,int> freq ;

    for(int i = 0 ; i < n ; i++)
        freq[ nums1[i] ] += m ;

    for(int i = 0 ; i < m ; i++ )
        freq[ nums2[i] ] += n ;

    for(auto it = freq.begin() ; it != freq.end() ; it++ )
    {
        if( (it -> second) % 2 != 0)
            ret = ret ^ (it -> first) ;
    }

    return ret ;
}
