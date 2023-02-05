// Add spaces to given index to a String
// https://leetcode.com/problems/adding-spaces-to-a-string/description/
// Aman Kumar

// Runtime 163 ms Beats 93.77%
// Memory 81.5 MB Beats 32.97%
string addSpaces(string s, vector<int>& spaces) 
{
    string ret = "" ;

    int sindex = 0 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( sindex < spaces.size() && i == spaces[ sindex ])
        {
            ret += " " ;
            sindex++ ;
        }

        ret += s[i] ;
    }

    return ret ;    
}
