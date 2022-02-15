// Given array of managers and informtime, where ith manager is manager[i] and time taken by manager to inform sub-ordinates is informTime[i], 
// Calculate time to inform all employess starting from head(denoted by -1)
// 
// Aman Kumar

// SOL-1 1.4sec 280MB

class MultiNode {
    public:
        int id ;
        vector<MultiNode*> child ;
    
        MultiNode(int i)
        {
            id = i ;
        }
} ;

class Solution {
public:
    int getInformTime( MultiNode *root, vector<int> &iTime, int c)
    {
        if( (root -> child).size() == 0 )
            return c ;
        
        int maxTime = c ;
        
        vector<MultiNode*> nodes = root -> child ;
        
        for( int i = 0 ; i < nodes.size() ; i++ )
        {        
            maxTime = max( maxTime, getInformTime( nodes[i], iTime, c+iTime[ root -> id ] ) ) ;
        }
        return maxTime ;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime)
    {
        MultiNode *root = new MultiNode( headID ) ;
        
        map<int,MultiNode*> hash ;
        hash[ headID ] = root ;
        
        // Create new nodes
        for( int i = 0 ; i < n ; i++ )
        {
            if( i != headID )
            {
                MultiNode *newnode = new MultiNode(i) ;
                hash[ i ] = newnode ;
            }
        }
        
        // Traverse again and connect parent child nodes
        for( int i = 0 ; i < n ; i++ )
        {
            if( i != headID )
            {
                MultiNode *currNode = hash[ i ] ;
                
                // Get manager of current node
                MultiNode *rootNode = hash[ manager[i] ] ;
                
                vector<MultiNode*> childList = rootNode -> child;
                childList.push_back( currNode ) ;
                
                rootNode -> child = childList ;
            }
        }
        
        int maxTime = 0 ;
        
        vector<MultiNode*> rootChild = root -> child ;
        
        for( int i = 0 ; i < rootChild.size() ; i++ )
        {
            maxTime = max( maxTime, getInformTime( rootChild[i], informTime, informTime[headID]) ) ;
        }
        
        return maxTime ;
/*
6
2
[3,2,-1,2,2,2]
[0,0,1,2,0,0]

15
0
[-1,0,0,1,1,2,2,3,3,4,4,5,5,6,6]
[1,1,1,1,1,1,1,0,0,0,0,0,0,0,0]
*/
    }
};
