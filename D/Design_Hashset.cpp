// Design int hash set
// https://leetcode.com/problems/design-hashset/description/
// Aman Kumar

// Runtime 87 ms Beats 85.29%
/// Memory 43.7 MB Beats 46.30%
class MyHashSet {
public:
    vector<bool> hash ;

    MyHashSet() 
    {
        hash.resize(1000001,0) ;
    }
    
    void add(int key) 
    {
        hash[ key ] = 1 ;
    }
    
    void remove(int key) 
    {
        hash[ key ] = 0 ;    
    }
    
    bool contains(int key) 
    {
        return hash[key] == 1 ;    
    }
};
