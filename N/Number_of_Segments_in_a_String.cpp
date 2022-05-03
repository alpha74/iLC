// Number of segments in a string
// https://leetcode.com/problems/number-of-segments-in-a-string/
// Aman Kumar

int countSegments(string s) 
{
    if( s.length() == 0 )
        return 0 ;

    int count = 0 ;
    string curr = "" ;

    int i = 0 ;

    while( i < s.length() && s[i] == ' ')
        i++ ;

    for( ; i < s.length() ; i++ )
    {
        if( s[i] == ' ')
        {
            if( curr.length() > 0 )
                count++ ;
            curr = "" ;
        }
        else
            curr += s[i] ;
    }

    if( curr.length() > 0 )
        count++ ;

    return count ;

/*
"                "
" s "
"the towns in all the world,   "
*/
}
