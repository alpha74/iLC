// Reverse only vowels from a given string
// 
// Aman Kumar

bool isVowel(char c)
{
    switch(c)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' : return true ;
    }
    return false ;
}

string reverseVowels(string s) 
{
    stack<char> stk ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( isVowel( s[i] ))
           stk.push( s[i] ) ;
    }

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( isVowel(s[i]))
       {
         s[i] = stk.top() ;
         stk.pop() ;
        }
    }

    return s ;
}
