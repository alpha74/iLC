// Defang an IP address
// https://leetcode.com/problems/defanging-an-ip-address/
// Aman Kumar

string defangIPaddr(string address) 
{
    string ret = "" ;

    for( int i = 0 ; i < address.length() ; i++ )
    {
        if( address[i] == '.' )
        {
            ret += "[" ;
            ret += "." ;
            ret += "]" ;
        }
        else
            ret += address[i] ;
    }

    return ret ;
}
