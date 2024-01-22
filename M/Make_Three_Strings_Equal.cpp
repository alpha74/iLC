// Given three string, return operations to make them equal
// https://leetcode.com/problems/make-three-strings-equal/description/
// Aman Kumar

// Runtime 3ms Beats92.84%of users with C++
// Memory 10.76MB Beats5.23%of users with C++
 int findMinimumOperations(string s1, string s2, string s3) 
{
    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = s3.length();

    int minLen = min(len1, len2);
    minLen = min(minLen, len3);

    int i = 0 ;

    while(i < minLen)
    {
        if(s1[i] == s2[i] && s2[i] == s3[i])
            i++ ;
        else 
            break ;
    }

    if(i == 0)
        return -1;

    return (len1 -i) + (len2 -i) + (len3 -i);
}
