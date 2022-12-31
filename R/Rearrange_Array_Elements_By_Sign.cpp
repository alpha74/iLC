// Rearrange Array Elements by signs as consecutive pairs
// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// Aman Kumar

// Runtime 239 ms Beats 85.19%
// Memory 140.7 MB Beats 18.71%
vector<int> rearrangeArray(vector<int>& nums) 
{
    vector<int> ret ;

    vector<int> pos ;
    vector<int> neg ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] >= 0 )
            pos.push_back( nums[i] ) ;
        else
            neg.push_back( nums[i] ) ;
    }

    int i = 0, j = 0 ;

    while( i < pos.size() && j < neg.size() )
    {
        ret.push_back( pos[i++] ) ;
        ret.push_back( neg[j++] ) ;
    }

    while( i < pos.size() )
        ret.push_back( pos[i++] ) ;

    while( j < neg.size() )
        ret.push_back( neg[j++] ) ;

    return ret ;    
}
