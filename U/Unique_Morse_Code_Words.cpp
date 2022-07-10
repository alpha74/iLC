// Number of unique morse code transformations
// https://leetcode.com/problems/unique-morse-code-words/
// Aman Kumar

void fillMorse( vector<string> &morse)
{
    morse[0] = ".-" ;
    morse[1] = "-..." ;
    morse[2] = "-.-." ;
    morse[3] = "-.." ;
    morse[4] = "." ;
    morse[5] = "..-." ;
    morse[6] = "--." ;
    morse[7] = "...." ;
    morse[8] = ".." ;
    morse[9] = ".---" ;
    morse[10] = "-.-" ;
    morse[11] = ".-.." ;
    morse[12] = "--" ;
    morse[13] = "-." ;
    morse[14] = "---" ;
    morse[15] = ".--." ;
    morse[16] = "--.-" ;
    morse[17] = ".-." ;
    morse[18] = "..." ;
    morse[19] = "-" ;
    morse[20] = "..-" ;
    morse[21] = "...-" ;
    morse[22] = ".--" ;
    morse[23] = "-..-" ;
    morse[24] = "-.--" ;
    morse[25] = "--.." ;
}

string morseCode( vector<string> &morse, string &s)
{
    string ret = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        ret += morse[ s[i] -'a'] ;
    }
    return ret ;
}

int uniqueMorseRepresentations(vector<string>& words) 
{
    vector<string> morse(26) ;

    fillMorse( morse ) ;

    unordered_map<string,bool> hash ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        string code = morseCode( morse, words[i] ) ;

        if( hash.find( code ) == hash.end() )
            hash[ code ] = true ;
    }

    return hash.size() ;
}
