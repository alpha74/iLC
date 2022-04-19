// Convert string to lower case
// https://leetcode.com/problems/to-lower-case/
// Aman Kumar

string toLowerCase(string s) 
{
    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] +32 ;
    }
    return s ;
}
