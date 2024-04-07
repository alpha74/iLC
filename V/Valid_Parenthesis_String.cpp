// Check if given string with (, ), * can form valid parenthesis string
// https://leetcode.com/problems/valid-parenthesis-string
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.27MB Beats75.32%of users with C++
bool checkValidString(string s) 
{
    // Min number of open braces
    int leftMin = 0;
    // Max number of open braces
    int leftMax = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '(')
        {
            leftMin++ ;
            leftMax++;
        } 
        else if(s[i] == ')')
        {
            leftMin-- ;
            leftMax-- ;
        }
        else 
        {
            leftMin-- ;
            leftMax++ ;
        }

        // There are more closing braces than opening ones
        if(leftMax < 0) return false;
        // Reset to 0 as negative number of opening braces is not possible
        if(leftMin < 0) leftMin = 0;
    }

    return leftMin == 0;
}
