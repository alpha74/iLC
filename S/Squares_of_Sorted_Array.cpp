// Return sorted array of squares of given array
// https://leetcode.com/problems/squares-of-a-sorted-array/
// Aman Kumar

vector<int> sortedSquares(vector<int>& nums) 
{
    vector<int> neg ;
    vector<int> pos ;
    int zeroIndex = -1 ;
    int pIndex = -1 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] == 0 )
            zeroIndex = i ;
        if( nums[i] > 0 && pIndex == -1 )
            pIndex = i ;
    }

    int negIndex = 0 ;

    if( zeroIndex != -1 )
        negIndex = zeroIndex -1 ;
    else if( pIndex != -1 )
        negIndex = pIndex - 1 ;
    else
        negIndex = nums.size() -1 ;

    for( int i = negIndex ; i >= 0 ; i-- )
    {
        neg.push_back( nums[i] * nums[i] ) ;
    }

    for( int i = pIndex ; i < nums.size() ; i++ )
    {
        pos.push_back( nums[i] * nums[i] ) ;
    }

    int k = 0 ;
    if( zeroIndex != -1 )
    {
        nums[0] = 0 ;
        k++ ;
    }

    int i = 0, j = 0 ;
    for( ; i < pos.size() && j < neg.size() ; )
    {
        if( pos[i] < neg[j] )
        {
            nums[k] = pos[i] ;
            i++ ;
            k++ ;
        }
        else if( neg[j] < pos[i] )
        {
            nums[k] = neg[j] ;
            k++ ;
            j++ ;
        }
        else
        {
            nums[k] = pos[i] ;
            k++ ;
            i++ ;
            nums[k] = neg[j] ;
            k++ ;
            j++ ;
        }
    }

    for( ; i < pos.size() && k < nums.size(); i++ )
    {
        nums[k] = pos[i] ;
        k++ ;
    }
    for( ; j < neg.size() && k < nums.size(); j++ )
    {
        nums[k] = neg[j] ;
        k++ ;
    }

    return nums ;
/*
[-4,-1,0,3,10]
[-7,-3,2,3,11]
[-7,-3]
[2,3,11]
[0]
*/
}
