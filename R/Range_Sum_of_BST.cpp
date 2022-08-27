// Return sum of nodes which lie in given range.
// https://leetcode.com/problems/range-sum-of-bst/
// Aman Kumar


// Runtime: 116 ms, faster than 99.58% of C++ online submissions for Range Sum of BST.
// Memory Usage: 64.7 MB, less than 19.51% of C++ online submissions for Range Sum of BST.
void inorder( TreeNode *root, int &l, int &r, int &sum)
{
    if( root == NULL )
        return ;

    inorder( root -> left, l, r, sum ) ;

    if( root -> val >= l && root -> val <= r)
        sum += ( root -> val ) ;

    inorder( root -> right, l, r, sum ) ;
}

int rangeSumBST(TreeNode* root, int low, int high) 
{
    int sum = 0 ;

    inorder( root, low, high, sum ) ;

    return sum ;
}
