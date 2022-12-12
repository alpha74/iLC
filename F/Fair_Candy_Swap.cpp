// Return number of candies swapped by two people so that both have same number of candies
// https://leetcode.com/problems/fair-candy-swap/description/
// Aman Kumar

// Runtime 108 ms Beats 88.2%
// Memory 47 MB Beats 48.76%
vector<int> fairCandySwap(vector<int>& A, vector<int>& B) 
{
    int diff = (accumulate(B.begin(), B.end(), 0) - accumulate(A.begin(), A.end(), 0)) >> 1;

    unordered_set<int> setB(B.begin(), B.end());

    for(int i = 0 ; i < A.size() ; i++ )
    {
        if( setB.find(diff + A[i]) != setB.end() )
            return { A[i], diff + A[i] };
    }

    return {0,0} ;
}
