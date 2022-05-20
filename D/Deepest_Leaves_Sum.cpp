// Return sum of deepest leaf sum
// https://leetcode.com/problems/deepest-leaves-sum/
// Aman Kumar

int deepestLeavesSum(TreeNode* root) 
{
    queue<TreeNode*> q1 ;
    queue<TreeNode*> q2 ;

    q1.push( root ) ;

    int leafsum1 = 0, leafsum2 = 0 ;

    while( !q1.empty() || !q2.empty() )
    {
        if( !q1.empty() )
        {
            leafsum1 = 0 ;

            while( !q1.empty() )
            {
                TreeNode *curr = q1.front() ;

                leafsum1 += curr -> val ;

                if( curr -> left != NULL )
                    q2.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q2.push( curr -> right ) ;

                q1.pop() ;
            }
            leafsum2 = 0 ;
        }
        else if( !q2.empty() )
        {
            while( !q2.empty() )
            {
                TreeNode *curr = q2.front() ;

                leafsum2 += curr -> val ;

                if( curr -> left != NULL )
                    q1.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q1.push( curr -> right ) ;


                q2.pop() ;
            }
            leafsum1 = 0 ;
        }
    }

    return max( leafsum1, leafsum2 ) ;
/*
[50,null,54,98,6,null,null,null,34]
*/
}
