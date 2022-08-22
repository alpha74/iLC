// Number of Valid words in a given sentence
// https://leetcode.com/problems/number-of-valid-words-in-a-sentence/
// Aman Kumar

bool isValidWord( string word )
{
    bool allLowercase = true ;
    int countHyphen = 0 ;
    int indexHyphen = -1 ;

    bool ret = true ;

    int countPuncMark = 0 ;
    int indexPuncMark = -1 ;

    for( int i = 0 ; i < word.length() && ret && allLowercase ; i++ )
    {
        if( isupper( word[i]))  
            allLowercase = false ;


        if( word[i] == '-')
        {
            countHyphen++ ;
            indexHyphen = i ;
        }

        if( word[i] == '!' || word[i] == '.' || word[i] == ',')
        {
            countPuncMark++ ;
            indexPuncMark = i ;
        }

        // Stopping conditions
        if( countPuncMark > 1 || countHyphen > 1 )
            ret = false ;
        else if( word[i] >= '0' && word[i] <= '9' )
            ret = false ;

        else if( countPuncMark == 1 && indexPuncMark +1 != word.length() )
            ret = false ;

        else if( countHyphen == 1 )
        {
            if( indexHyphen -1 < 0 || indexHyphen +1 >= word.length() )
                ret = false ;

            else
            {
                char prev = word[indexHyphen-1] ;
                char next = word[indexHyphen+1] ;

                if( prev < 'a' || prev > 'z' || next <'a' || next >'z')
                    ret = false ;
            }
        }
    }

    return ret && allLowercase ;
}

int countValidWords(string sentence) 
{
    string temp = "" ;
    int count = 0 ;

    for( int i = 0 ; i < sentence.length() ; i++ )
    {
        if( sentence[i] == ' ')
        {   
            if( temp.length() > 0 && isValidWord( temp ) )
                count++ ;

            temp = "" ;
        }
        else if( sentence[i] != ' ')
            temp += sentence[i] ;
    }

    if( temp.length() > 0 && isValidWord( temp ) )
        count++ ;

    return count ;
}
