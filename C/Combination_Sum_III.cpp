// Return combinations using 1-9 having size k and sum n
// https://leetcode.com/problems/combination-sum-iii/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.5 MB Beats 48.18%
void combSum( vector<int> &arr, vector<int> &curr, int i, int &k, int &n, vector<vector<int>> &ret, int sum)
{
    if( curr.size() > k )
        return ;

    if(curr.size() == k && sum == n)
    {
        ret.push_back( curr ) ;
        return ;
    }

    for( ; i < arr.size() ; i++ )
    {
        if( sum + arr[i] > n )
            continue ;

        curr.push_back( arr[i] ) ;
        sum += arr[i] ;

        combSum( arr, curr, i+1, k, n, ret, sum ) ;

        sum -= curr[ curr.size() - 1] ;
        curr.pop_back() ;

    }
}

vector<vector<int>> combinationSum3(int k, int n) 
{
    vector<vector<int>> ret ;
    vector<int> arr;

    for( int i = 0 ; i < 9 ; i++ )
    {
        arr.push_back(i+1);
    }    

    vector<int> curr ;
    int sum = 0 ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        sum = 0 ;
        curr.push_back( arr[i] ) ;
        sum += arr[i] ;

        combSum( arr, curr, i+1, k, n, ret, sum ); 

        sum -= curr[ curr.size() - 1] ;
        curr.pop_back() ;
    }

    return ret ;
/*
2, 18
*/
}
