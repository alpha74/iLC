// Return uncommon words between two sentences.
// https://leetcode.com/problems/uncommon-words-from-two-sentences/
// Aman Kumar

vector<string> uncommonFromSentences(string s1, string s2) 
{
    unordered_map<string,int> hash1 ;
    unordered_map<string,int> hash2 ;

    string curr = "" ;
    for( int i = 0 ; i < s1.length() ; i++ )
    {
        if( s1[i] == ' ' )
        {
            hash1[ curr ]++ ;
            curr = "" ;
        }
        else
            curr += s1[i] ;
    }
    hash1[ curr ]++ ;

    curr = "" ;
    for( int i = 0 ; i < s2.length() ; i++ )
    {
        if( s2[i] == ' ')
        {
            hash2[ curr ]++ ;
            curr = "" ;
        }
        else
            curr += s2[i] ;
    }
    hash2[ curr ]++ ;

    vector<string> ret ;

    for( auto it = hash1.begin() ; it != hash1.end() ; it++ )
    {
        if( it -> second == 1 )
        {
            auto it2 = hash2.find( it -> first ) ;

            if( it2 == hash2.end() )
                ret.push_back( it -> first ) ;
        }
    }

    for( auto it = hash2.begin() ; it != hash2.end() ; it++ )
    {
        if( it -> second == 1 )
        {
            auto it2 = hash1.find( it -> first ) ;

            if( it2 == hash1.end() )
                ret.push_back( it -> first ) ;
        }
    }

    return ret ;
}
