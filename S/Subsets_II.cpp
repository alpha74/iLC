// Return power set without duplicates of given array(with duplicates)
// https://leetcode.com/problems/subsets-ii/
// Aman Kumar

class Solution {
public:
    void subset( vector<int> &row, vector<int> &nums, int i, int &len, vector<vector<int>> &ret )
    {
        if( row.size() == len )
        {
            vector<int> temp = row ;
            
            sort( temp.begin(), temp.end() ) ;
            ret.push_back( temp ) ;
            return ;
        }
        
        for( ; i < nums.size() ; i++ )
        {
            row.push_back( nums[i] ) ;
            subset( row, nums, i+1, len, ret ) ;
            row.pop_back() ;
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<int> row ;
        vector<vector<int>> ret ;
        
        map<vector<int>,int> hash ;
        hash[ row ] = 1 ;
        
        for( int len = 1 ; len <= nums.size() ; len++ )
        {
            for( int i = 0 ; i < nums.size() ; i++ )
            {
                row.push_back( nums[i] ) ;
                subset( row, nums, i+1, len, ret ) ;
                row.pop_back() ;
            }
        }
        
        // Create hash
        for( int i = 0 ; i < ret.size() ; i++ )
        {
            hash[ ret[i] ]++ ;
        }
        
        // Remove duplicates
        ret.clear() ;
        
        for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
        {
            ret.push_back( iter -> first ) ;
        }
        
        return ret ;
/*
[1,1,1]
[1,1,2]
[1,2,3]
[4,4,1]
[4,4,4,1,4]
[1,2,1,4,1]
*/
    }
};
