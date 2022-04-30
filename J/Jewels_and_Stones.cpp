// Return how many stones are jewels
// https://leetcode.com/problems/jewels-and-stones/
// Aman Kumar

int numJewelsInStones(string jewels, string stones) 
{
    int freq[257] = { 0 };

    for( int i = 0  ; i < jewels.size() ; i++ )
    {
        freq[ jewels[i] ]++ ;
    }

    int ret = 0 ;

    for( int i = 0 ; i < stones.size() ; i++ )
    {
        if( freq[ stones[i] ] > 0 )
            ret++ ;
    }

    return ret ;
}
