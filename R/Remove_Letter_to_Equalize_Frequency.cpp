// Remove a letter to equalize all character's frequency
// https://leetcode.com/problems/remove-letter-to-equalize-frequency/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.2 MB Beats 35.33%
bool equalized(vector<int> &freq)
{
    set<int> hash ;

    for(int i = 0 ; i < 26 ; i++)
    {
        if(freq[i] > 0 )
            hash.insert( freq[i] ) ;

        if(hash.size() > 1)
            return false ;
    }

   return true ;
}

bool equalFrequency(string word) 
{
    vector<int> freq(26,0) ;

    for(int i = 0 ; i < word.length() ; i++)
    {
        freq[ word[i] -'a']++ ;
    }

    for(int i = 0 ; i < 26 ; i++ )
    {
        if(freq[i] > 0)
        {
            freq[i]-- ;

            if(equalized(freq))
                return true ;

            freq[i]++ ;
        }
    }

    return false ;
}
