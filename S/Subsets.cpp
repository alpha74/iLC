// Return power set of given array
// https://leetcode.com/problems/subsets/
// Aman Kumar

void subset( vector<int> &row, vector<int> &nums, int i, int &len, vector<vector<int>> &ret  )
{
    if( row.size() == len )
    {
        ret.push_back( row ) ;
        return ;
    }

    for( ; i < nums.size() ; i++ )
    {
        row.push_back( nums[i] ) ;
        subset( row, nums, i+1, len, ret ) ;
        row.pop_back() ;
    }
}

vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<int> row ;
    vector<vector<int>> ret ;

    ret.push_back( row ) ;

    for( int len = 1 ; len <= nums.size() ; len++ )
    {
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            row.push_back( nums[i] ) ;
            subset( row, nums, i+1, len, ret ) ;
            row.pop_back() ;
        }
    }

    return ret ;
}
