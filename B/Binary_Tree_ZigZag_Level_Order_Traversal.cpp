// Bianry Tree zigzag level order traversal
// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 12.3 MB Beats 8.42%
vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
{
    vector<vector<int>> ret ;

    if(root == NULL)
        return ret ;

    stack<TreeNode*> stk1, stk2 ;

    stk1.push( root ) ;

    while( !stk1.empty() || !stk2.empty() )
    {
        vector<int> row ;

        if( !stk1.empty() )
        {
            while( !stk1.empty() )
            {
                TreeNode *curr = stk1.top() ;
                stk1.pop() ;

                row.push_back( curr -> val ) ;

                if( curr -> left != NULL )
                    stk2.push( curr -> left ) ;

                if( curr -> right != NULL)
                    stk2.push( curr -> right ) ;
            }
        }
        else if( !stk2.empty() )
        {
            while( !stk2.empty() )
            {
                TreeNode *curr = stk2.top() ;
                stk2.pop() ;

                row.push_back( curr -> val ) ;

                if( curr -> right != NULL )
                    stk1.push( curr -> right ) ;
                if( curr -> left != NULL )
                    stk1.push( curr -> left ) ;
            }
        }

        ret.push_back( row ) ;
    }

    return ret ;
}
