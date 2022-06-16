// Calculate digit sum of a string in parts of length K
// https://leetcode.com/problems/calculate-digit-sum-of-a-string/
// Aman Kumar

string digitSumStr( string s )
{
    int sum = 0 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        sum += ( s[i] - 48 ) ;
    }

    return to_string( sum ) ;
}

string digitSum(string s, int k) 
{   
    while( s.length() > k )
    {
        string currPart = "" ;
        string newS = "" ;

        // Break string in k parts
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( currPart.length() > 0 && currPart.length() % k == 0 )
            {

                newS += digitSumStr( currPart ) ;
                currPart = s[i] ;
            }
            else
                currPart += s[i] ;

        }

        if( currPart.length() > 0 )
            newS += digitSumStr( currPart ) ;

        s = newS ;
    }

    return s ;
}
