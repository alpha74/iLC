// Find largest integer which has same freq as its value
// https://leetcode.com/problems/find-lucky-integer-in-an-array/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 10.7 MB Beats 18.74%
int findLucky(vector<int>& arr) 
{
    vector<int> freq(501,0);
    int ret = -1 ;

    for(int i = 0 ; i < arr.size() ; i++)
        freq[ arr[i] ]++ ;
    
    for(int i = 1 ; i <= 500 ; i++)
        if(freq[i] == i)
            ret = i ;

    return ret;
}
