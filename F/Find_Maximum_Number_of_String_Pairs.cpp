// Find maximum number of string pairs
// https://leetcode.com/problems/find-maximum-number-of-string-pairs/description/
// Aman Kumar

// Runtime 3 ms Beats 99.25%
// Memory 22.3 MB Beats 9.28%
int maximumNumberOfStringPairs(vector<string>& words) 
{
    int count = 0 ;
    unordered_map<string,bool> hash ;

    for(int i = 0 ; i < words.size() ; i++)
    {
        string rev = words[i] ;
        reverse(rev.begin(), rev.end()) ;

        if(hash[rev] == true)
        {
            count++ ;
            hash[rev] = false ;
        }
        else
            hash[ words[i] ] = true ;
    }    

    return count ;
}
