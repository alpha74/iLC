// Return the only string having different String Difference than all others
// https://leetcode.com/problems/odd-string-difference/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.8 MB Beats 40.61%
string oddString(vector<string>& words) 
{
    map<vector<int>, int> freq ;
    map<vector<int>, string> smap ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        string s = words[i] ;

        vector<int> row ;

        for( int j = 1 ; j < s.length() ; j++)
        {
            row.push_back( s[j] - s[j-1] );
        }

        freq[ row ]++ ;
        smap[ row ] = s ;
    }    

    for( auto it = freq.begin() ; it != freq.end() ; it++ )
    {
        if( it -> second == 1 )
            return smap[ it -> first ] ;
    }

    return "" ;
/*
["mll","edd","jii","tss","fee","dcc","nmm","abb","utt","zyy","xww","tss","wvv","xww","utt"]
*/
}
