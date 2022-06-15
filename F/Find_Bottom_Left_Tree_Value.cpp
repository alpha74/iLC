// Find leftmost, bottom-most node value
// https://leetcode.com/problems/find-bottom-left-tree-value/
// Aman Kumar

int findBottomLeftValue(TreeNode* root) 
{
    queue<TreeNode*> q1, q2 ;

    int ret = -1 ;

    q1.push( root ) ;

    while( !q1.empty() || !q2.empty() ) 
    {
        if( !q1.empty() )
        {
            TreeNode *curr = q1.front() ;

            ret = curr -> val ;

            while( !q1.empty() )
            {
                curr = q1.front() ;

                if( curr -> left != NULL )
                    q2.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q2.push( curr -> right ) ;

                q1.pop() ;
            }
        }
        else if( !q2.empty() )
        {
            TreeNode *curr = q2.front() ;

            ret = curr -> val ;

            while( !q2.empty() )
            {
                curr = q2.front() ;

                if( curr -> left != NULL )
                    q1.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q1.push( curr -> right ) ;

                q2.pop() ;
            }
        }
    }

    return ret ;
}
