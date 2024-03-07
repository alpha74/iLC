// Return min swaps for moving all black balls to right and white to left
// https://leetcode.com/problems/separate-black-and-white-balls/
// Aman Kumar

// Runtime 30ms Beats84.65%of users with C++
// Memory 15.04MB Beats38.45%of users with C++
long long minimumSteps(string s) 
{
    int n = s.length();
    int count1 = 0;
    long long ret = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '1')
            count1++ ;
        else
            ret += count1;
    }
    return ret;
}
