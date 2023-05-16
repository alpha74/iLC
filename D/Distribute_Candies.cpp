// Distribute candies
// https://leetcode.com/problems/distribute-candies/
// Aman Kumar

// Runtime 297 ms Beats 61.54%
// Memory 116 MB Beats 66.12%
int distributeCandies(vector<int>& candyType) 
{
    unordered_map<int,bool> hash ;

    for( int i = 0 ; i < candyType.size() ; i++ )
    {
        hash[ candyType[i] ] = 1 ;
    }

    return min( candyType.size() / 2, hash.size() ) ;
}
