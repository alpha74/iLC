// Add two binary strings
// https://leetcode.com/problems/add-binary/
// Aman Kumar

string addBinStr( char ca, char cb, string carry)
{
    string ret = "" ;
    string a, b ;
    a += ca ;
    b += cb ;

    // Calculate sum on a and b
    if( a == "0" && b == "0" ) 
        ret = "0" ;
    else if( a == "0" )
        ret = b ;
    else if( b == "0" )
        ret = a ;
    else
        ret = "10" ;

    // Add carry
    if( carry == "0")
        return ret ;
    else
    {
        if( ret == "0")
            ret = "1" ;
        else if( ret == "1")
            ret = "10" ;
        else if( ret == "10")
            ret = "11" ;
    }

    return ret ;
}

string addBinary(string a, string b) 
{
    string ret = "" ;

    reverse( a.begin(), a.end() ) ;
    reverse( b.begin(), b.end() ) ;

    int sizea = a.length(), sizeb = b.length() ;
    int i = 0, j = 0 ;

    string carry = "0" ;

    for( ; i < sizea && j < sizeb ; i++, j++ )
    {
        string sum = addBinStr(a[i], b[i], carry) ;

        if( sum.length() == 1 )
        {
            ret += sum[0] ;
            carry = "0" ;
        }
        else
        {
            ret += sum[1] ;
            carry = sum[0] ;
        }
    }

    // If remaining a
    for( ; i < sizea ; i++ )
    {
        string sum = addBinStr(a[i],'0',carry) ;

        if( sum.length() == 1 )
        {
            ret += sum[0] ;
            carry = "0" ;
        }
        else
        {
            ret += sum[1] ;
            carry = sum[0] ;
        }
    }

    // If remaining b
    for( ; i < sizeb ; i++ )
    {
        string sum = addBinStr('0', b[i],carry) ;

        if( sum.length() == 1 )
        {
            ret += sum[0] ;
            carry = "0" ;
        }
        else
        {
            ret += sum[1] ;
            carry = sum[0] ;
        }
    }

    // If carry present, add 1
    if( carry == "1" )
            ret += carry ;

    // Reverse ret sum
    reverse( ret.begin(), ret.end() ) ;

    return ret ;
}
