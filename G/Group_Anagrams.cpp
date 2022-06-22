// Group anagrams together from a given list of string
// https://leetcode.com/problems/group-anagrams/
// Aman Kumar

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    vector<vector<string>> ret ;

    unordered_map<string, vector<string>> anagramList ;

    for( int i = 0 ; i < strs.size() ; i++ )
    {
        string curr = strs[i] ;

        sort( curr.begin(), curr.end() ) ;

        auto it = anagramList.find( curr ) ;

        if( it == anagramList.end() )
        {
            vector<string> newList ;
            newList.push_back( strs[i] ) ;

            anagramList[ curr ] = newList ;
        }
        else
        {
            vector<string> currList = it -> second ;
            currList.push_back( strs[i] ) ;

            anagramList[ curr ] = currList ;
        }
    }

    for( auto it = anagramList.begin() ; it != anagramList.end() ; it++ )
    {
        ret.push_back( it -> second) ;
    }
    return ret ;
}
