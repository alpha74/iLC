// N-ary tree level order traversal
// https://leetcode.com/problems/n-ary-tree-level-order-traversal/description/
// Aman Kumar

// Runtime 16 ms Beats 96.42%
// Memory 12.1 MB Beats 5.67%
vector<vector<int>> levelOrder(Node* root) 
{
    vector<vector<int>> ret ;

    if( root == NULL)
        return ret ;

    queue<Node*> q1, q2 ;

    q1.push( root ) ;

    while( !q1.empty() || !q2.empty() )
    {
        vector<int> row ;

        if( !q1.empty() )
            while( !q1.empty() )
            {
                Node *curr = q1.front() ;
                q1.pop() ;

                row.push_back( curr -> val ) ;

                vector<Node*> children = curr -> children ;

                for( int i = 0 ; i < children.size() ; i++ )
                    q2.push( children[i] ) ;
            }

        else if( !q2.empty() )
            while( !q2.empty() )
            {
                Node *curr = q2.front() ;
                q2.pop() ;

                row.push_back( curr -> val ) ;

                vector<Node*> children = curr -> children ;

                for( int i = 0 ; i < children.size() ; i++ )
                    q1.push( children[i] ) ;
            }

        ret.push_back( row ) ;
    }

    return ret ;    
}
