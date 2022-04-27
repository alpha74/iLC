// Return most common word from paragraph which is not banned
// https://leetcode.com/problems/most-common-word/
// Aman Kumar

bool isBanned( string s, unordered_map<string,bool> &banned )
{
    if( banned.find( s ) != banned.end() )
        return true ;
    return false ;
}

string mostCommonWord(string paragraph, vector<string>& banned) 
{
    unordered_map<string,int> freq ;

    unordered_map<string,bool> bMap ;

    for( int i = 0 ; i < banned.size() ; i++ )
    {
        bMap[ banned[i] ] = 1 ;
    }

    string curr = "" ;

    for( int i = 0 ; i < paragraph.length() ; i++ )
    {
        if( paragraph[i] >= 'A' && paragraph[i] <= 'Z')
            curr += ( paragraph[i] + 32 ) ;

        else if( paragraph[i] >= 'a' && paragraph[i] <= 'z')
            curr += paragraph[i] ;

        else 
        {
            if( curr.length() > 0 )
                freq[ curr ]++ ;

            curr = "" ;
        }
    }


    if( curr.length() > 0 )
        freq[ curr ]++ ;

    int maxFreq = INT_MIN ;
    string maxStr = "" ;

    for( auto iter = freq.begin() ; iter != freq.end() ; iter++ )
    {
        //cout << "\n " << iter -> first << " : " << iter -> second ;
        if( isBanned( iter -> first, bMap ) == false && iter-> second > maxFreq )
        {
            maxFreq = iter -> second ;
            maxStr = iter -> first ;
        }

    }
    return maxStr ;
/*
"a, a, a, a, b,b,b,c, c"
["a"]
*/
}
