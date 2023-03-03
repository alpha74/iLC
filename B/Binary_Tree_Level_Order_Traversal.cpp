// Return level order traversal of BT as a 2D matrix
// https://leetcode.com/problems/binary-tree-level-order-traversal/
// Aman Kumar

// Runtime 4 ms Beats 67.31%
// Memory 13.4 MB Beats 13.7%
vector<vector<int>> levelOrder(TreeNode* root) 
{
    vector<vector<int>> ret ;

    queue<TreeNode*> q ;

    if( root == NULL )
        return ret ;
    q.push(root) ;

    while( !q.empty() )
    {
        vector<int> row ;
        queue<TreeNode*> q2 ;

        while( !q.empty() )
        {
            TreeNode *qfront = q.front() ;

            q2.push(qfront);
            row.push_back( qfront -> val );
            q.pop() ;
        }

        while( !q2.empty() )
        {
            TreeNode *curr = q2.front() ;
            q2.pop() ;

            if( curr -> left != NULL )
                q.push( curr -> left ) ;
            if( curr -> right != NULL )
                q.push( curr -> right ) ;
        }

        ret.push_back(row) ;
    }

    return ret ;
}
