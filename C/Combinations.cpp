// Print all combinations of range 1 to n of size k
// https://leetcode.com/problems/combinations/
// Aman Kumar

void combination( vector<vector<int>> &ret, vector<int> &curr, int &k, int &n, int i)
{
    if( curr.size() == k )
    {
        ret.push_back( curr ) ;
        return ;
    }
    for( ; i <= n ; i++ )
    {
        curr.push_back( i ) ;
        combination( ret, curr, k, n, i+1 ) ;
        curr.pop_back() ;
    }

}

vector<vector<int>> combine(int n, int k) 
{
    vector<vector<int>> ret ;

    vector<int> curr ;

    for( int i = 1 ; i <= n ; i++ )
    {
        curr.push_back( i ) ;
        combination( ret, curr, k, n, i+1 ) ;
        curr.pop_back() ;
    }

    return ret ;
}
