// Return lowest level having largest level sum in a Binary tree
// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/
// Aman Kumar

// Runtime 189 ms Beats 91.42%
// Memory 111 MB Beats 7.48%
int maxLevelSum(TreeNode* root) 
{
    int minLevel = 1 ;
    int maxSum = root -> val ;
    int currLevel = 1 ;

    queue<TreeNode*> q1, q2 ;

    q1.push( root ) ;

    while( !q1.empty() || !q2.empty() )
    {
        if( !q1.empty() )
        {
            int currSum = 0 ;

            // Calculate current level's sum
            while( !q1.empty() ) 
            {
                TreeNode *currNode = q1.front() ;
                q1.pop() ;

                currSum += currNode -> val ;

                if( currNode -> left != NULL )
                    q2.push( currNode -> left ) ;

                if( currNode -> right != NULL )
                    q2.push( currNode -> right ) ;
            }

            // Update maxSum and level
            if( currSum > maxSum )
            {
                maxSum = currSum ;
                minLevel = currLevel ;
            }

            q1 = q2 ;
            queue<TreeNode*> emptyQ ;
            q2 = emptyQ ;
        }

        currLevel++ ;
    }

    return minLevel ;  
}
