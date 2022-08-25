// Evaluate boolean binary tree using values in nodes
// https://leetcode.com/problems/evaluate-boolean-binary-tree/
// Aman Kumar


// Runtime: 8 ms, faster than 98.59% of C++ online submissions for Evaluate Boolean Binary Tree.
// Memory Usage: 15.1 MB, less than 35.67% of C++ online submissions for Evaluate Boolean Binary Tree.
bool evaluateTree(TreeNode* root) 
{
    if( root == NULL )
        return true ;
    else if( root -> left == NULL && root -> right == NULL )
        return root -> val ;

    bool ret = true ;
    if( root -> val == 2 )
        ret = evaluateTree( root -> left ) || evaluateTree( root -> right ) ;

    else
        ret = evaluateTree( root -> left ) && evaluateTree( root -> right ) ;

    return ret ;
}
