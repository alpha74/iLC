// Determine if two strings are close based on 2 given rules
// https://leetcode.com/problems/determine-if-two-strings-are-close/description/
// Aman Kumar

// Runtime 69 ms Beats 79.58%
// Memory 20.6 MB Beats 70.33%
bool closeStrings(string word1, string word2) 
{
    /*
        cabbba
        abbccc

        1,2,3
        1,2,3  true

        abbzzca
        babzzcz

        1,2,2,2
        1,1,2,3  false

    */    

    int len1 = word1.length(), len2 = word2.length() ;

    if( len1 != len2 )
        return false ;

    vector<int> f1( 27, 0 ) ;
    vector<int> f2( 27, 0 ) ;

    // Create freq map for word1
    for( int i = 0 ; i < len1 ; i++ )
    {
        f1[ word1[i] -'a']++ ;
    }

    // Create freq map for word2
    for( int i = 0 ; i < len2 ; i++ )
    {
        f2[ word2[i] -'a']++ ;

        // Check if curr char is ONLY present in word1
        if( f1[ word2[i] -'a' ] == 0 )
            return false ;
    }

    // Check if all chars of word1 are ONLY present in word2
    for( int i = 0 ; i < f1.size() ; i++ )
    {
        if( f1[i] == 0 && f2[i] > 0)
            return false ;

        if( f1[i] > 0 && f2[i] == 0 )
            return false ;
    }

    // Sort freq lists
    sort( f1.rbegin(), f1.rend() ) ;
    sort( f2.rbegin(), f2.rend() ) ;

    // Check value of frequency consecutively for equalness
    int p = f1.size()-1 ;
    int q = f2.size()-1 ;

    while( p >= 0 && q >=0 && p == q)
    {
        if( f1[p] != f2[q] )
            return false ;
        p-- ;
        q-- ;
    }

    return p == q ;
/*
"abbzzca"
"babzzcz"
*/
}
