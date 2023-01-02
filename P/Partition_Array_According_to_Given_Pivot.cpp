// Partition array according to given pivot
// https://leetcode.com/problems/partition-array-according-to-given-pivot/description/
// Aman Kumar

// Runtime 222 ms Beats 91.53%
// Memory 134.6 MB Beats 19.8%
vector<int> pivotArray(vector<int>& nums, int pivot) 
{
    vector<int> less ;
    vector<int> same ;
    vector<int> great ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] == pivot )
            same.push_back( nums[i] ) ;

        else if( nums[i] > pivot )
            great.push_back( nums[i] ) ;

        else
            less.push_back( nums[i] ) ;
    }    

    same.insert( same.end(), great.begin(), great.end() ) ;
    less.insert( less.end(), same.begin(), same.end() ) ;

    return less ;
}
