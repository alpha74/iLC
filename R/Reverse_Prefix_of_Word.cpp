// Reverse prefix of a given word
// https://leetcode.com/problems/reverse-prefix-of-word/
// Aman Kumar

string reversePrefix(string word, char ch) 
{
    int index = -1 ;

    for( int i = 0 ; i < word.length() && index == -1 ; i++ )
    {
        if( word[i] == ch )
            index = i ;
    }

    if( index == -1 )
        return word ;

    for( int i = 0 ; i < (index+1)/2 ; i++ )
    {
        char temp = word[i] ;
        word[i] = word[index-i] ;
        word[ index - i ] = temp ;
    }
    return word ;
}
