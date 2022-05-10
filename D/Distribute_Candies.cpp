// Distribute candies
// https://leetcode.com/problems/distribute-candies/
// Aman Kumar

int distributeCandies(vector<int>& candyType) 
{
    unordered_map<int,bool> hash ;

    for( int i = 0 ; i < candyType.size() ; i++ )
    {
        hash[ candyType[i] ] = 1 ;
    }

    return min( candyType.size() / 2, hash.size() ) ;
}
