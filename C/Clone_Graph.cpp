// Return deep copy of given graph
// https://leetcode.com/problems/clone-graph/description/
// Aman Kumar

// Runtime 3 ms Beats 95.3%
// Memory 8.6 MB Beats 87.72%

  /*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) 
    {
        if(node == NULL)
            return NULL ;
        
        vector<Node*> hash(101) ;
        vector<bool> visited(101,0) ;

        queue<Node*> q ;
        q.push(node) ;

        while(!q.empty())
        {
            Node *curr = q.front() ;
            q.pop() ;

            if(visited[ curr -> val ])
                continue ;

            visited[ curr -> val ] = 1 ;

            Node *currnew = NULL ;

            // If node already created
            if(hash[ curr -> val ] != NULL)
                currnew = hash[ curr -> val ] ;

            // If node not already created
            else
            {
                currnew = new Node(curr -> val) ;
                hash[curr -> val] = currnew ;
            }
            
            vector<Node*> newList = currnew -> neighbors ;

            // Scan the neighbors
            for(int i = 0 ; i < (curr -> neighbors).size() ; i++ )
            {
                // Create new neighbour is not already exist
                if( hash[ (curr -> neighbors)[i] -> val ] != NULL)
                    newList.push_back(hash[ (curr -> neighbors)[i] -> val ]) ;
                else
                {
                    Node *newNeighbor = new Node( (curr -> neighbors)[i] -> val ) ;
                    hash[ newNeighbor -> val ] = newNeighbor ;
                    newList.push_back( newNeighbor ) ;
                }

                q.push( (curr -> neighbors)[i] ) ;
            }

            // Add new neighbors list
            currnew -> neighbors = newList ;

            hash[ currnew -> val ] = currnew ;
        }

        return hash[1] ;
    }
};
