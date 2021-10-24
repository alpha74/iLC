// Count complete tree nodes
// https://leetcode.com/problems/count-complete-tree-nodes/submissions/
// Aman Kumar

int countNodes(TreeNode* root) 
{
    if( root == NULL )
        return 0 ;
    else if( root -> left == NULL && root -> right == NULL )
            return 1 ;

    int nodes = 1 ;
    if( root -> left != NULL )
        nodes += countNodes( root -> left ) ;

    if( root -> right != NULL )
        nodes += countNodes( root -> right ) ;

    return nodes ;
}
