// Count strings which occur once in both arrays
// https://leetcode.com/problems/count-common-words-with-one-occurrence/
// Aman Kumar

int countWords(vector<string>& words1, vector<string>& words2) 
{
    unordered_map<string,int> hash1 ;
    unordered_map<string,int> hash2 ;

    for( int i = 0 ; i < words1.size() ; i++ )
    {
        hash1[ words1[i] ]++ ;
    }

    for( int i = 0 ; i < words2.size() ; i++ )
    {
        hash2[ words2[i] ]++ ;
    }

    int ret = 0 ;

    for( int i = 0 ; i < words1.size() ; i++ )
    {
        if( hash1[ words1[i] ] == 1 && hash2[ words1[i] ] == 1 )
            ret++ ;
    }

    return ret ;
}
