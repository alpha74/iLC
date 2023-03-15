// Check completeness of a binary tree
// https://leetcode.com/problems/check-completeness-of-a-binary-tree/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 10.4 MB Beats 59.30%
bool isCompleteTree(TreeNode* root) 
{
    queue<TreeNode*> q ;

    q.push( root ) ;

    while(!q.empty() && q.front() != NULL)
    {
        TreeNode *curr = q.front() ;
        q.pop() ;

        q.push(curr -> left) ;
        q.push(curr -> right) ;
    }

    // Remove all remaining NULL nodes
    while(!q.empty() && q.front() == NULL)
        q.pop() ;

    return q.empty() ;

/*
[1,null,2]
*/
}
