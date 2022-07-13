// Check if any element's freq is same as some other element freq.
// https://leetcode.com/problems/unique-number-of-occurrences/
// Aman Kumar

bool uniqueOccurrences(vector<int>& arr) 
{
    vector<int> freq( 2001, 0 ) ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        freq[ arr[i] +1000 ]++ ;
    }

    unordered_map<int,bool> hash ;

    for( int i = 0 ; i < 2001 ; i++ )
    {
        if( freq[i] != 0 && hash[ freq[i] ] > 0 )
            return false ;
        else
            hash[ freq[i] ] = 1 ;
    }
    return true ;
}
