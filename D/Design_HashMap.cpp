// Design Hash map of integers
// https://leetcode.com/problems/design-hashmap/description/
// Aman Kumar

// Runtime 162 ms Beats 47.94%
// Memory 213.3 MB Beats 9.97%
class MyHashMap {
public:
    vector<int> hash ;
    vector<bool> present ;

    MyHashMap() 
    {
        hash.resize(1000001) ;    
        present.resize(1000001) ;
    }
    
    void put(int key, int value) 
    {
        present[ key ] = 1 ;
        hash[ key ] = value ;
    }
    
    int get(int key) 
    {
        if(!present[ key ])    
            return -1 ;
        return hash[ key ] ;
    }
    
    void remove(int key) 
    {
        present[ key ] = false ;    
    }
};
