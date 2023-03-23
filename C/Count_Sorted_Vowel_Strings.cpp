// Count Sorted Vowel strings with length n
// https://leetcode.com/problems/count-sorted-vowel-strings/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.1 MB Beats 40.65%
int countVowelStrings(int n) 
{
    if(n == 1)
        return 5 ;

    vector<int> count(5,1) ;

    /*
        1 1 1 1 1
         5  4 3 2 1
        15 10 6 3 1
    */

    while(n--)
    {
        for(int i = 3 ; i >= 0 ; i-- )
        {
            count[i] = count[i+1] + count[i] ;
        }
    }

    return count[0] ;
}
