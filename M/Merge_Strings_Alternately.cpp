// Merge characters from two string alternately into one
// https://leetcode.com/problems/merge-strings-alternately/
// Aman Kumar

string mergeAlternately(string word1, string word2) 
{
    string ret = "" ;
    int i = 0, j = 0 ;

    for( ; i < word1.length() && j < word2.length() ; i++, j++ )
    {
        ret += word1[i] ;
        ret += word2[j] ;
    }

    for( ; i < word1.length() ; i++ )
        ret += word1[i] ;

    for( ; j < word2.length() ; j++ )
        ret += word2[j] ;

    return ret ;
}
