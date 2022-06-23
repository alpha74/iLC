// Find resultant array after removing right one string of consecutive anagrams
// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
// Aman Kumar

vector<string> removeAnagrams(vector<string>& words) 
{
    bool flag = true ;
    vector<bool> mark( words.size(), 0 );

    while( flag )
    {
        flag = false ;

        for( int i = 1 ; i < words.size() ; i++ )
        {
            if( mark[i] == 0 )
            {
                string curr1 = words[i-1] ;
                string curr2 = words[i] ;

                sort( curr1.begin(), curr1.end() ) ;
                sort( curr2.begin(), curr2.end() ) ;

                if( curr1 == curr2 )
                {
                    flag = true ;

                    mark[ i ] = 1 ;
                }
            }
        }
    }

    vector<string> ret ;

    for( int i =  0 ; i < words.size() ; i++ )
    {
        if( mark[i] == 0 )
            ret.push_back( words[i] ) ;
    }

    return ret ;
}
