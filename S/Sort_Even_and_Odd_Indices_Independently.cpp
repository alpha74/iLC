// Sort numbers at even and odd indices in separate order
// https://leetcode.com/problems/sort-even-and-odd-indices-independently/
// Aman Kumar

vector<int> sortEvenOdd(vector<int>& nums) 
{
    vector<int> even ;
    vector<int> odd ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( i % 2 == 0 )
            even.push_back( nums[i] ) ;
        else
            odd.push_back( nums[i] ) ;
    }

    sort( even.begin(), even.end() ) ;
    sort( odd.rbegin(), odd.rend() ) ;

    int index = 0 ;
    for( int i = 0 ; i < even.size() ; i++ )
    {
        nums[ index ] = even[i] ;
        index += 2 ;
    }
    index = 1 ;

    for( int i = 0 ; i < odd.size() ; i++ )
    {
        nums[ index ] = odd[i] ;
        index += 2 ;
    }

    return nums ;
}
