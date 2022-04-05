// Check if numbers in sentences are strictly increasing
// https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/
// Aman Kumar

bool areNumbersAscending(string s) 
{
    bool first = true ;
    int last = 0 ;
    bool ret = true ;

    for( int i = 0 ; i < s.length() && ret ; i++ )
    {
        if( s[i] >= '0' && s[i] <= '9' )
        {
            string num = "" ;

            while( i < s.length() && (s[i] >= '0' && s[i] <= '9' ))
            {
                num += s[i] ;
                i++ ;
            }

            if( first )
            {
                last = stoi( num ) ;
                first = false ;
            }
            else
            {
                if( stoi( num ) <= last )
                    ret = false ;
                else
                    last = stoi( num ) ;
            }
        }
    }
    return ret ;
}
