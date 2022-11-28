// Check if all the intergers in given range are covered in array range.
// https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if All the Integers in a Range Are Covered.
// Memory Usage: 8.9 MB, less than 41.98% of C++ online submissions for Check if All the Integers in a Range Are Covered.
bool isCovered(vector<vector<int>>& ranges, int left, int right) 
{
    bool ret = true ;

    for( ; left <= right && ret ; left++ )
    {
        bool found = false ;
        for( int i = 0 ; i < ranges.size() && !found; i++ )
        {
            int len = ranges[i].size() ;
            if(ranges[i][0] <= left && left <= ranges[i][len-1])
                found = true ;
        }

        if( !found )
            ret = false ;
    }

    return ret ;
}
