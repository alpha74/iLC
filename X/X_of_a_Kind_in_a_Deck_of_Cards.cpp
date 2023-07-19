// Check if cards can be grouped in groups having samme card value
// https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/description/?envType=list&envId=9y1tu63i
// Aman Kumar

// Runtime 15 ms Beats 81.27%
// Memory 17.5 MB Beats 12.53%
bool hasGroupsSizeX(vector<int>& deck) 
{
    unordered_map<int,int> freq ;
    int hcf = 0 ;

    for(int i = 0 ; i < deck.size() ; i++)
    {
        freq[ deck[i] ]++ ;
        hcf = max(hcf, freq[ deck[i] ]) ;
    }

    unordered_set<int> freqVals ;

    for(auto it = freq.begin() ; it != freq.end() ; it++)
    {
        freqVals.insert(it -> second) ;
    }

    // Find hcf of all freqs
    for(auto it = freqVals.begin() ; it != freqVals.end() ; it++)
    {
        hcf = __gcd(hcf, *it) ;
    }

    return hcf > 1 ;
}
