// Return Kth largest element in stream of numbers
// https://leetcode.com/problems/kth-largest-element-in-a-stream/
// Aman Kumar

struct comp
{
    bool operator()(int a, int b) const 
    {
        return a > b;
    }
};

class KthLargest {
    public:
    
    // Here, root will always be kth Largest
    priority_queue<int, vector<int>, comp> pq;
    int K;
    
    KthLargest(int k, vector<int>& nums) 
    {
        K = k ;
        
        int ret = 0 ;
        
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            ret = add( nums[i] ) ;
        }
    }
    
    int add(int n) 
    {
        // Push if size of minHeap is < k
        if ( pq.size() < K) {
            pq.push(n);
        }
 
        // If new element is > smallest in minHeap, remove smallest and push new
        else if (n > pq.top() )
        {
            pq.pop();
            pq.push(n);
        }
 
        // if the size of the min-heap reaches `k`, return the top element
        if ( pq.size() == K ) 
            return pq.top();
        
        else 
            return -1 ;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
