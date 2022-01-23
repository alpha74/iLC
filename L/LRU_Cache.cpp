// Implement LRU cache of given capacity
// https://leetcode.com/problems/lru-cache/
// Aman Kumar

class DLL
{
    public:
        int key  ;
        int val ;
        
        DLL *next ;
        DLL *prev ;
    
        DLL(int k, int v)
        {
            key = k ;
            val = v ;
            next = NULL ;
            prev= NULL ;
        }
        
} ;

void setNodeAhead( DLL *node, DLL *head, DLL *tail)
{
    // Get neighbour nodes of key node
    DLL *prevNode = node -> prev ;
    DLL *nextNode = node -> next;

    if( prevNode != NULL )
        prevNode -> next = nextNode ;
    
    if( nextNode != NULL )
        nextNode -> prev = prevNode ;

    // Set this node after head 
    DLL *headNext = head -> next ;

    head -> next = node ;
    node -> prev = head ;

    node -> next = headNext ;
    headNext -> prev = node ;
}


class LRUCache {
public:
    
    int cap = 0 ;
    unordered_map<int,DLL*> hash ;
    DLL* head = NULL, *tail = NULL ;
    
    LRUCache(int capacity) 
    {
        cap = capacity ;
        
        DLL *nodeHead = new DLL(-1,-1) ;
        DLL *nodeTail = new DLL(-2,-2) ;
        head = nodeHead ;
        tail = nodeTail ;
        
        head -> next = tail ;
        tail -> prev = head ;
    }
    
    int get(int key) 
    {
        // Check if key is present in hash
        auto iter = hash.find( key ) ;
        if( iter == hash.end() )
            return -1 ;
        
        int ret = 0 ;
        DLL *node = iter -> second ;
        ret = node -> val ;
        
        // If MRU is same node, do nothing
        if( head -> next == node )
            return ret ;
        
        setNodeAhead( node, head, tail ) ;
        
        return ret ;
    }
    
    void put(int key, int value) 
    {
        // Check if key already present
        auto iter = hash.find( key ) ;
        
        if( iter != hash.end() )
        {
            // Update val
            DLL *updateNode = iter -> second ;
            updateNode -> val = value ;
            
            setNodeAhead( updateNode, head, tail ) ;
        }
        // Check if capacity is reached
        else if( hash.size() == cap )
        {
            // Get node which is to be removed, prev to tail
            DLL *remNode = tail -> prev ;
            
            int remKey = remNode -> key ;
            hash.erase( remKey ) ;
            
            // Remove the remNode 
            DLL *prevNode = remNode -> prev ;
            prevNode -> next = tail ;
            tail -> prev = prevNode ;
            
            //delete remNode ;
        }
        
        // If key is not already present
        if( iter == hash.end() )
        {
            DLL *newnode = new DLL(key, value) ;

            hash[ key ] = newnode ;
            setNodeAhead( newnode, head, tail ) ;
        }
    }
  
/*
["LRUCache","put"]
[[2],[1,1]]

["LRUCache","get","put","get","put","put","get","get"]
[[2],[2],[2,6],[1],[1,5],[1,2],[1],[2]]
*/

};
