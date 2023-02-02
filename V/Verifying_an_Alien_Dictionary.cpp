// Verify if words given as lexicographically sorted according to permutated alphabetic order
// https://leetcode.com/problems/verifying-an-alien-dictionary/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 9.7 MB Beats 25.79%
bool checkIncreasing(string a, string b, unordered_map<int,int> &orderMap)
{   
    int i = 0, j = 0 ;

    while( a[i] == b[j] && i < a.length() && j < b.length() )
    {
        i++ ;
        j++ ;
    }

    // If both string are exhausted
    if( i == a.length() && j == b.length() )
        return true ;

    // If only b is exhausted
    if( j == b.length() )
        return false ;

    if( orderMap[ a[i] -'a' ] > orderMap[ b[j] -'a'] )
        return false ;

    return true ;
}

bool isAlienSorted(vector<string>& words, string order) 
{
    unordered_map<int,int> orderMap ;

    for( int i = 0 ; i < order.length() ; i++ )
    {
        orderMap[ order[i] -'a' ] = i ;
    }

    for( int i = 0 ; i < words.size()-1 ; i++ )
    {
        if( !checkIncreasing( words[i], words[i+1], orderMap ))
            return false ;
    }

    return true ;
/*
["aa","a"]
"abqwertyuioplkjhgfdszxcvnm"

*/
}
