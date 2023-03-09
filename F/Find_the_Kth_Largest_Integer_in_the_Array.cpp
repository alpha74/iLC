// Find the kth largest integer from array of numbers are strings
// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/description/
// Aman Kumar

// Runtime 486 ms Beats 19.4%
// Memory 197.8 MB Beats 16.76%
static bool sortStr(string a, string b)
{
    if (a.size() != b.size()) 
        return a.size() < b.size();
    return a < b ;
}

string kthLargestNumber(vector<string>& nums, int k) 
{
    make_heap( nums.begin(), nums.end(), sortStr ) ;

    while(k-- > 1)
    {
        pop_heap( nums.begin(), nums.end(), sortStr) ;
        nums.pop_back() ;
    }  

    return nums.front() ;

/*
["21","2","12","982"]
2

["423","521","2","42"]
2
*/
}
