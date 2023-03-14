// Find the kth largest integer from array of numbers are strings
// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/description/
// Aman Kumar

// Runtime 192 ms Beats 95.50%
// Memory 77.2 MB Beats 41.71%
struct sortStr
{
        bool operator()(string &a, string &b)
        {
            if (a.size() != b.size()) 
                return a.size() > b.size();
            return a > b ;
        }
    };


class Solution {
public:
    bool isSmaller(string a, string b)
    {
        if (a.size() != b.size()) 
            return a.size() < b.size();
        return a < b ;
    }

    string kthLargestNumber(vector<string>& nums, int k) 
    {
        priority_queue<string, vector<string>, sortStr> minheap ;
        int curr = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if(curr < k)
            {
                minheap.push( nums[i] ) ;
                curr++ ;
            }
            else if( isSmaller(minheap.top(), nums[i] ) == 1)
            {
                minheap.pop();
                minheap.push( nums[i] ) ;
            }

            if(curr > k)
                minheap.pop() ;
        }

        // Return min string
        return minheap.top() ;

/*
["21","2","12","982"]
2

["423","521","2","42"]
2
*/
    }
};
