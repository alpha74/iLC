// Return any binary string which does not exists in array
// https://leetcode.com/problems/find-unique-binary-string/
// Aman Kumar

string addOneBit( string s )
{
    bool carry = 1 ;

    for( int i = s.length() -1 ; carry == 1 && i >= 0 ; i-- )
    {
        if( s[i] == '0' )
        {
            s[i] = '1' ;
            carry = 0 ;
        }
        else
        {
            s[i] = '1' ;
            carry = 1 ;
        }
    }
    return s ;
}

string findDifferentBinaryString(vector<string>& nums) 
{
    unordered_map<string,bool> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ] = true ;
    }

    string patt = "" ;

    int n = nums.size() ;
    while( n-- )
    {
        patt += "0" ;
    }

    string ret = "#" ;

    while( ret == "#" )
    {
        if( hash.find( patt) == hash.end() )
            return patt ;
        else
            patt = addOneBit( patt ) ;
    }
    return patt ;
/*
["000","001","110"]
*/
}
