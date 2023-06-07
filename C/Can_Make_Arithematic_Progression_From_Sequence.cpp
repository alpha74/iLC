// Can amke arithematic progression from sequence
// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/
// Aman Kumar

// Runtime 3 ms Beats 85.29%
// Memory 9.1 MB Beats 65.93%
bool canMakeArithmeticProgression(vector<int>& arr) 
{
    sort(arr.begin(), arr.end()) ;

    int diff = arr[1] - arr[0] ;

    for(int i = 2 ; i < arr.size() ; i++)
    {
        if(arr[i] - arr[i-1] != diff)
            return false ;
    }    
    return true ;
}
