// Given string of numbers representing buttons in phone, return all string which can be made using those digits
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Aman Kumar

string numToStr(char n)
{
    switch(n)
    {
        case '2' : return "abc" ;
        case '3' : return "def" ;
        case '4' : return "ghi" ;
        case '5' : return "jkl" ;
        case '6' : return "mno" ;
        case '7' : return "pqrs" ;
        case '8' : return "tuv" ;
        case '9' : return "wxyz" ;
    }
    return "" ;
}

void recur( int i, string curr, string &digits, vector<string> &ret) 
{
    if( curr.length() >= digits.length() )
    {
        ret.push_back( curr ) ;
        return ;
    }

    string d = numToStr( digits[i] ) ;

    for( int j = 0 ; j < d.length() ; j++ )
    {
        curr += d[j] ;
        recur( i+1, curr, digits, ret ) ;

        if( curr.length() > 0 )
            curr.pop_back() ;
    }        
}

vector<string> letterCombinations(string digits) 
{
    vector<string> ret ;


    string d = numToStr( digits[0] ) ;

    for( int j = 0 ; j < d.length() ; j++ )
    {
        string curr = "" ;
        curr += d[j] ;
        recur( 1, curr, digits, ret ) ;

        if( curr.length() > 0 )
            curr.pop_back() ;
    }

    return ret ;
}
