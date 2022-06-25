// Sort the sentence based on number at end of each word
// https://leetcode.com/problems/sorting-the-sentence/
// Aman Kumar

static bool sortStr( string a, string b )
{
    int lena = a.length(), lenb = b.length() ;
    int posa = 0, posb = 0 ;

    int i = lena -1 ;
    string tempnum = "" ;

    while( i >= 0 && a[i] >= '0' && a[i] <= '9' )
    {
        tempnum = tempnum + a[i] ;
        i-- ;
    }
    posa = stoi( tempnum ) ;

    tempnum = "" ;
    i = lenb -1 ;

    while( i >= 0 && b[i] >= '0' && b[i] <= '9' )
    {
        tempnum = tempnum + b[i] ;
        i-- ;
    }

    posb = stoi( tempnum ) ;

    if( posa < posb )
        return true ;
    return false ;
}

string sortSentence(string s) 
{
    vector<string> words ;

    string curr = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == ' ')
        {
            words.push_back( curr ) ;
            curr = "" ;
        }
        else
            curr += s[i] ;
    }

    if( curr.length() > 0 )
        words.push_back( curr ) ;

    sort( words.begin(), words.end(), sortStr ) ;

    string ret = "" ;

    ret += words[0].substr(0, words[0].length() -1 ) ;

    for( int i = 1 ; i < words.size() ; i++ )
    {
        ret += " " ;
        ret += words[i].substr( 0, words[i].length() - 1 );
    }

    return ret ;
}
