// Find the orignal array of prefix XOR
// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
// Aman Kumar

// Runtime 84 ms Beats 99.67%
// Memory 76 MB Beats 51.86%
vector<int> findArray(vector<int>& pref) 
{
    int n = pref.size() ;

    vector<int> ret(n, 0) ;
    ret[0] = pref[0] ;
    int x = pref[0] ;


    for(int i = 1 ; i < n ; i++)
    {
        int temp = x ^ pref[i] ;
        ret[i] = temp ;

        x = x ^ temp ;
    }   

    return ret ;
}
