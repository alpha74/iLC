// Redistribute any characters from any string to any string to make all given strings equal
// https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/description/
// Aman Kumar

// Runtime 20 ms Beats 87.88%
// Memory 11.7 MB Beats 65.15%
bool makeEqual(vector<string>& words) 
{
    vector<int> freq(26,0);
    int n = words.size() ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < words[i].length() ; j++ )
        {
            freq[ words[i][j] -'a']++ ;
        }
    }

    for( int i = 0 ; i < 26 ; i++ )
    {
        if( freq[i] % n != 0 )
            return false ;
    }

    return true ;
}
