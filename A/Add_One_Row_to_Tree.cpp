// Add one new level having node value as val in a given binary tree
// https://leetcode.com/problems/add-one-row-to-tree/description/
// Aman Kumar

// Runtime 11 ms Beats 99.58%
// Memory 25.2 MB Beats 21.64%
TreeNode* addOneRow(TreeNode* root, int val, int depth) 
{
    if(depth == 1)
    {
        TreeNode *newhead = new TreeNode(val) ;

        newhead -> left = root ;
        return newhead ;
    }

    int currDepth = 1 ;

    queue<TreeNode*> q ;
    q.push( root ) ;

    // Run till depth-1 level is obtained
    while( currDepth+1 < depth && !q.empty() )
    {
        int qlen = q.size() ;

        for( int i = 0 ; i < qlen ; i++ )
        {
            TreeNode* curr = q.front() ;
            q.pop() ;

            if( curr -> left != NULL )
                q.push( curr -> left ) ;

            if( curr -> right != NULL)
                q.push( curr -> right ) ;
        }
        currDepth++ ;
    }

    // For each element in queue, add new level and connect nodes
    while( !q.empty() )
    {
        TreeNode *curr = q.front() ;
        q.pop() ;

        TreeNode* oldLeft = curr -> left ;
        TreeNode* oldRight = curr -> right ;

        TreeNode* newLeft = new TreeNode(val) ;
        TreeNode* newRight = new TreeNode(val) ;

        curr -> left = newLeft ;
        curr -> right = newRight ;

        newLeft -> left = oldLeft ;
        newRight -> right = oldRight;
    }

    return root ;
}
