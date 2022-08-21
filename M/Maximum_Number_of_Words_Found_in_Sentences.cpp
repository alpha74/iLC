// Maximum number of words from a list of sentences
// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
// Aman Kumar

int numWords( string s )
    {
        string temp = "" ;
        int count = 0 ;
        
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( s[i] == ' ')
            {
                temp = "" ;
                count++ ;
            }
            else
                temp += s[i] ;
        }
        
        if( temp.length() > 0 )
            count++ ;
        
        return count ;
    }
    
    int mostWordsFound(vector<string>& sentences) 
    {
        int maxCount = 0 ;
        
        for( int i = 0 ; i < sentences.size() ; i++ )
        {
            maxCount = max( maxCount, numWords( sentences[i] )) ;
        }
        
        return maxCount ;
    }
