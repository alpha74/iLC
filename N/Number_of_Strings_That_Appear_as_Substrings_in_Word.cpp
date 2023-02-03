// Number of strings that appear as substrings in a word
// https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/description/
// Aman Kumar

// Runtime 4 ms Beats 83.64%
// Memory 9.4 MB Beats 20.22%
bool isSubstr(string word, string pat)
{
    for( int i = 0 ; i < word.length() ; i++ )
    {
        if( word[i] == pat[0] )
        {
            int windex = i ;
            int pindex = 0 ;

            while( windex < word.length() && pindex < pat.length() 
            && word[ windex ] == pat[ pindex ])
            {
                pindex++ ;
                windex++ ;
            }

            if( pindex == pat.length() )
                return true ;
        }
    }

    return false ;
}

int numOfStrings(vector<string>& patterns, string word) 
{
    int count = 0 ; 

    for( int i = 0 ; i < patterns.size() ; i++ )
    {
        if( isSubstr( word, patterns[i] ))
            count++ ;
    }    

    return count ;
}
