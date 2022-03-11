// Return third maximum distinct number. If not present, return first maximum.
// https://leetcode.com/problems/third-maximum-number/
// Aman Kumar

int thirdMax(vector<int>& nums) 
{
    set<int> hash; 

    for( int i = 0 ; i < nums.size() ; i++ )
        hash.insert( nums[i] ) ;

    if( hash.size() < 3 )
    {
        auto iter = hash.rbegin() ;
        return *iter ;
    }
    auto iter = hash.rbegin() ;
    iter++ ;
    iter++ ;
    return *iter ;
}
