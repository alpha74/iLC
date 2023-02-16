// Return list of average of levels of binary tree
// https://leetcode.com/problems/average-of-levels-in-binary-tree/
// Aman Kumar

// Runtime 16 ms Beats 70.38%
// Memory 22.5 MB Beats 36.49%
vector<double> averageOfLevels(TreeNode* root) 
{
    vector<double> ret ;

    queue<TreeNode*> q1, q2 ;

    q1.push( root ) ;

    while( !q1.empty() || !q2.empty() )
    {
        if( !q1.empty() )
        {
            double sum = 0 ;
            int count = 0 ;

            while( !q1.empty() )
            {
                TreeNode *curr = q1.front() ;
                q1.pop() ;

                sum += curr -> val ;
                count++ ;

                if( curr -> left != NULL )
                    q2.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q2.push( curr -> right ) ;
            }

            ret.push_back( double( (1.0 * sum) / count )) ;
        }
        else if( !q2.empty() )
        {
            double sum = 0 ;
            int count = 0 ;

            while( !q2.empty() )
            {
                TreeNode *curr = q2.front() ;
                q2.pop() ;

                sum += curr -> val ;
                count++ ;

                if( curr -> left != NULL )
                    q1.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q1.push( curr -> right ) ;
            }

            ret.push_back( double( (1.0 * sum) / count )) ;
        }
    }

    return ret ;
}
