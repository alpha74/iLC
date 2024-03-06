// Check if given string can be palindrome after removing at most 1 character
// https://leetcode.com/problems/valid-palindrome-ii/submissions/1196007799/
// Aman Kumar

// Runtime 51ms Beats80.32%of users with C++
// Memory 25.62MB Beats26.23%of users with C++
bool isPalindrome(string &s, int l, int r)
{
    while(l < r)
    {
        if(s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

bool validPalindrome(string s) 
{
    int left = 0, right = s.length()-1;

    while(left < right)
    {
        if(s[left] != s[right]) {
            // Skip char at left and check
            if(isPalindrome(s, left+1, right))
                return true;
    
            // Skip char at right and check
            if(isPalindrome(s, left, right-1))
                return true;

            return false;
        }
        left++ ;
        right-- ;
    }

    return true;
}
