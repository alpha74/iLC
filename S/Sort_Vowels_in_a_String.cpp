// Sort ony vowels in a given string
// https://leetcode.com/problems/sort-vowels-in-a-string/description/?envType=daily-question&envId=2023-11-13
// Aman Kumar

// Runtime Details 75ms Beats 13.17%of users with C++
// Memory Details 12.30MB Beats 82.05%of users with C++
bool isVowel(char &c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true ;
    
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true ;
    
    return false ;
}

static bool sort_vowel(char &a, char &b)
{
    return a < b ;
}

string sortVowels(string s) 
{
    vector<char> vowels ;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(isVowel(s[i]))
            vowels.push_back( s[i] ) ;
    }    

    sort(vowels.begin(), vowels.end(), sort_vowel);

    int j = 0 ;

    for(int i = 0 ; i < s.length() ; i++ )
    {
        if(isVowel(s[i]))
        {
            s[i] = vowels[j++] ;
        }
    }

    return s ;
}
