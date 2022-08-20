// Return percentage of a letter in a string
// https://leetcode.com/problems/percentage-of-letter-in-string/
// Aman Kumar

 int percentageLetter(string s, char letter) 
{
    unordered_map<char,int> freq ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        freq[ s[i] ]++ ;
    }

    double perc = freq[ letter ] * 1.0 ;
    perc /= s.length() ;
    perc *= 100 ;

    return perc ;
}
