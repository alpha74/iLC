// Min number of operations needed to move all balls to each box
// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
// Aman Kumar

// Runtime 122 ms Beats 54.35%
// Memory 8.8 MB Beats 89.53%
vector<int> minOperations(string boxes) 
{
    int n = boxes.length() ;
    vector<int> onePos ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( boxes[i] == '1')
        onePos.push_back( i ) ;
    }    

    vector<int> ret(n, 0) ;

    for( int i = 0 ; i < n ; i++ )
    {
        int count = 0 ;

        for( int j = 0 ; j < onePos.size() ; j++ )
        {
            count += abs( i - onePos[j] ) ;
        }

        ret[i] = count ;
    }

    return ret ;
}
