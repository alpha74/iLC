// Given letter widths in pixels and string, return number of lines and width of last line
// https://leetcode.com/problems/number-of-lines-to-write-string/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 8.31MB Beats8.19%of users with C++
vector<int> numberOfLines(vector<int>& widths, string s) 
{
    int curr_width = 0, lines = 1;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(curr_width + widths[s[i] -'a'] <= 100)
            curr_width += widths[s[i] - 'a'];
        else
        {
            curr_width = widths[s[i] - 'a'];
            lines++;
        }
    }

    return {lines, curr_width};    
}
