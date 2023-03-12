// Lowest Common Ancestor of a Binary Tree given two nodes
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// Aman Kumar

// Runtime 12 ms Beats 94.34%
// Memory 14.4 MB Beats 27.18%
bool traverse(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *&ret)
{
    if( root == NULL )
        return false ;

    bool left = traverse( root -> left, p, q, ret ) ;
    bool right = traverse( root -> right, p, q, ret ) ;

    if( left && right )
    {
        ret = root ;
        return true ;
    }

    if( root -> val == p -> val && ( left || right ))
    {
        ret = root ;
        return true ;
    }

    if( root -> val == q -> val && ( left || right ))
    {
        ret = root ;
        return true ;
    }

    if( root -> val == p -> val || root -> val == q -> val )
    {
        ret = root ;
        return true ;
    }

    return left || right ;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
{
    TreeNode *ret = NULL ;

    bool left = traverse( root -> left, p, q, ret ) ;
    bool right = traverse( root -> right, p, q, ret ) ;

    if( left && right )
        return root ;

    if( root -> val == p -> val && ( left || right ))
        return root ;

    if( root -> val == q -> val && ( left || right ))
        return root ;

    if( root -> val == p -> val || root -> val == q -> val )
        return root ;

    return ret ;
/*
[3,1,4,null,2]
2
4
*/
}
