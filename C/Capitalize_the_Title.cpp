// Capitalize the title
// https://leetcode.com/problems/capitalize-the-title/ 
// Aman Kumar

void convertWord( string &s)
{
    if( s.length() <= 2 )
    {
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( s[i] >= 'A' && s[i] <='Z' )
                s[i] = s[i] + 32 ;
        }
    }
    else
    {
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( i == 0 && s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32 ;

            else if( i > 0 && s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32 ;
        }
    }
}

string capitalizeTitle(string title) 
{
    string curr = "" ;
    string ret = "" ;
    for( int i = 0 ; i < title.length() ; i++ )
    {
        if( title[i] == ' ')
        {
            convertWord( curr ) ;
            ret += curr ;
            ret += " " ; 
            curr = "" ;
        }
        else
            curr += title[i] ;
    }

    convertWord( curr ) ;
    ret += curr ;
    return ret ;
}
