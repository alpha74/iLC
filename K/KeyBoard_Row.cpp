// Return words which can be typed using one row of keyboard
// https://leetcode.com/problems/keyboard-row/submissions/
// Aman Kumar

vector<int> mapKey()
{
    vector<int> key ;

    key.push_back( 2 ) ;
    key.push_back( 3 ) ;
    key.push_back( 3 ) ;
    key.push_back( 2 ) ;
    key.push_back( 1 ) ;
    key.push_back( 2 ) ;
    key.push_back( 2 ) ;
    key.push_back( 2 ) ;
    key.push_back( 1 ) ;
    key.push_back( 2 ) ;
    key.push_back( 2 ) ;
    key.push_back( 2 ) ;
    key.push_back( 3 ) ;
    key.push_back( 3 ) ;
    key.push_back( 1 ) ;
    key.push_back( 1 ) ;
    key.push_back( 1 ) ;
    key.push_back( 1 ) ;
    key.push_back( 2 ) ;
    key.push_back( 1 ) ;
    key.push_back( 1 ) ;
    key.push_back( 3 ) ;
    key.push_back( 1 ) ;
    key.push_back( 3 ) ;
    key.push_back( 1 ) ;
    key.push_back( 3 ) ;

    return key ;
}

char lowerCase(char c)
{
    if( c >= 'a' && c <= 'z')
        return c ;

    return c+32 ;
}

vector<string> findWords(vector<string>& words) 
{
    vector<string> ret ;
    vector<int> keyRow = mapKey() ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        int row = keyRow[ lowerCase(words[i][0]) - 'a' ] ;

        cout << "\n word: " << words[i] ;

        bool found = true ;
        for( int j = 1 ; j < words[i].length() && found ; j++ )
        {
            if(  keyRow[ lowerCase(words[i][j]) -'a' ] != row )
                found = false ;
        }

        if( found )
            ret.push_back( words[i] ) ;
    }

    return ret ;
}
