// Check if strings formed by appending strings in two arrays are same.
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
// Aman Kumar

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
{
    string s1 = "" ;
    string s2 = "" ;

    for( int i = 0 ; i < word1.size() ; i++ )
    {
        s1 += word1[i] ;
    }

    for( int i = 0 ; i < word2.size() ; i++ )
    {
        s2 += word2[i] ;
    }

    return s1 == s2 ;
}
