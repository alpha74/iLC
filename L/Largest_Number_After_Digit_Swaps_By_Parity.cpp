// Return largest number after swapping digits by parity
// https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.1 MB Beats 36.15%

int largestInteger(int num) 
{
    vector<int> even ;
    vector<int> odd ;

    vector<int> nums ;

    while(num > 0)
    {
        int rem = num % 10 ;

        nums.push_back( rem ) ;
        num /= 10 ;

        if( rem % 2 == 0 )
            even.push_back( rem ) ;
        else
            odd.push_back( rem ) ;
    }

    sort( even.rbegin(), even.rend() ) ;
    sort( odd.rbegin(), odd.rend() ) ;

    reverse( nums.begin(), nums.end() ) ;

    int n = nums.size() ;

    int i = 0, j = 0 ;
    int k = 0 ;
    int e = even.size(), o = odd.size() ;
    int ret = 0 ;

    while( i < e && j < o && k < n )
    {
        if( nums[k] % 2 == 0 )
        {
            ret = ret * 10 + even[i] ;
            i++ ;
        }
        else
        {
            ret = ret * 10 + odd[j] ;
            j++ ;
        }
        k++ ;
    }

    while( i < e )
    {
        ret = ret * 10 + even[i++] ;
    }

    while( j < o )
    {
        ret = ret * 10 + odd[j++] ;
    }

    return ret ;
}
