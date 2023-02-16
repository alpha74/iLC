// Smallest number in infinite set
// https://leetcode.com/problems/smallest-number-in-infinite-set/description/
// Aman Kumar

// Runtime 89 ms Beats 73.85%
// Memory 35.1 MB Beats 98.56%
class SmallestInfiniteSet {
public:
    vector<bool> arr ;


    SmallestInfiniteSet() 
    {
        vector<bool> temp(1001,1);
        arr = temp ;
    }
    
    int popSmallest() 
    {
        for( int i = 1 ; i <= 1001 ; i++ )
        {
            if( arr[i] == 1 )
            {
                arr[i] = 0 ;
                return i ;
            }
        }

        return -1 ;
    }
    
    void addBack(int num) 
    {   
        arr[num] = 1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
