// Convert given roman number to integer
// https://leetcode.com/problems/roman-to-integer/
// Aman Kumar

int charToVal(char c)
{
    switch( c)
    {
        case 'I' : return 1 ;
        case 'V' : return 5 ;
        case 'X' : return 10 ;
        case 'L' : return 50 ;
        case 'C' : return 100 ;
        case 'D' : return 500;
        case 'M' : return 1000 ;

        default: return 0 ;
    }
}

int romanToInt(string s) 
{
    int num = 0 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == 'I' && i+1 < s.length() && (s[i+1] == 'V' || s[i+1] == 'X') )
        {
            num += ( charToVal( s[i+1] ) -1) ;
            i++ ;
        }

        else if( s[i] == 'X' && i+1 < s.length() && (s[i+1] == 'L' || s[i+1] == 'C') )
        {
            num += ( charToVal( s[i+1]) -10 ) ;
            i++ ;
        }

        else if( s[i] == 'C' && i+1 < s.length() && (s[i+1] == 'D' || s[i+1] == 'M') )
        {
            num += ( charToVal( s[i+1] ) - 100 ) ;
            i++ ;
        }

        else    
            num += charToVal( s[i] ) ;
    }
    return num ;
}
/*
"III"
"LVIII"
"MCMXCIV"
"V"
"IV"
*/
