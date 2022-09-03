// Calculate sum of tilt of binary tree at each node.
// https://leetcode.com/problems/binary-tree-tilt
// Aman Kumar

// Runtime: 20 ms, faster than 84.02% of C++ online submissions for Binary Tree Tilt.
// Memory Usage: 23.6 MB, less than 78.76% of C++ online submissions for Binary Tree Tilt.
int calcTilt( TreeNode *root, int &tilt)
{
    if( root == NULL )
        return 0 ;

    int leftVal = calcTilt( root -> left, tilt ) ;
    int rightVal = calcTilt( root -> right, tilt ) ;

    tilt += abs( leftVal - rightVal ) ;

    return leftVal + rightVal + root -> val ;
}

int findTilt(TreeNode* root) 
{
    int ret = 0 ;
    calcTilt( root, ret ) ;
    return ret ;
}
