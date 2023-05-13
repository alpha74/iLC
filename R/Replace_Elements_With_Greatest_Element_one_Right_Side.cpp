// Replace element with greatest element on the right side
// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/
// Aman Kumar

// Runtime 113 ms Beats 78.91%
// Memory 68.5 MB Beats 93.17%
vector<int> replaceElements(vector<int>& arr) 
{
    int n = arr.size() ;

    int currmax = arr[n-1] ;
    arr[n-1] = -1 ;

    for(int i = n -2 ; i >= 0 ; i-- )
    {
        int temp = arr[i] ;
        arr[i] = currmax ;
        currmax = max(currmax, temp) ;
    }

    return arr ;
}
