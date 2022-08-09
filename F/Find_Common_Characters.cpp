// Find characters which are present in all strings
// https://leetcode.com/problems/find-common-characters/
// Aman Kumar

vector<string> commonChars(vector<string>& words) 
{
    vector<vector<int>> wordFreq ;
    vector<int> minFreq ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        vector<int> freq(27,0) ;

        for( int j = 0 ; j < words[i].length() ; j++ )
        {
            freq[ words[i][j] -'a']++ ;
        }

        wordFreq.push_back( freq ) ;

        if( i == 0 )
            minFreq = freq ;
        else
        {
            for( int j = 0 ; j < 27 ; j++ )
            {
                minFreq[j] = min( minFreq[j], freq[j] ) ;
            }
        }
    }

    vector<string> ret ;

    for( int i = 0 ; i < 27 ; i++ )
    {
        int count = minFreq[i] ;

        while( count-- )
        {
            string temp = "" ;
            char letter = 'a' + i ;

            temp += letter ;

            ret.push_back( temp ) ;
        }

    }

    return ret ;
/*
["acabcddd","bcbdbcbd","baddbadb","cbdddcac","aacbcccd","ccccddda","cababaab","addcaccd"]
*/
}
