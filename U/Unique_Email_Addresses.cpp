// Return unique email receiving addresses.
// https://leetcode.com/problems/unique-email-addresses/
// Aman Kumar

string evaluateEmail( string s )
{
    int sep = -1 ;

    int i = 0 ;
    string localPart = "" ;

    for( ; i < s.length() && sep == -1 ; i++ )
    {
        if( s[i] == '+' )
            break ;
        else if( s[i] == '.' ) ;
        else if( s[i] == '@' )
            sep = i ;
        else 
            localPart += s[i] ;
    }

    // Find separator if not found
    if( sep == -1 )
    {
        for( ; i < s.length() && sep == -1 ; i++ )
        {
            if( s[i] == '@' )
                sep = i ;
        }
    }

    string domain = "" ;

    for( ; i < s.length() ; i++ )
    {
        domain += s[i] ;
    }

    return localPart + "@" + domain ;
}

int numUniqueEmails(vector<string>& emails) 
{
    unordered_map<string,bool> hash ;

    for( int i = 0 ; i < emails.size() ; i++ )
    {
        hash[ evaluateEmail( emails[i] ) ] = 1 ;
    }
    return hash.size() ;
/*
["test.email+alex@leetcode.com","test.email.leet+alex@code.com"]
*/
}
