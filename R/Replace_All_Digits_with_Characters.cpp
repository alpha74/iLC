// Replace digits with characters + offset
// https://leetcode.com/problems/replace-all-digits-with-characters/
// Aman Kumar

string replaceDigits(string s) 
{
    for( int i = 1 ; i < s.length() ; i+=2 )
    {
        if( (i+1) % 2 == 0 )
        {
            int rot = s[i] - 48 ;
            s[i] = s[i-1] + int(s[i] - 48) ;
        }
    }
    return s ;
}
