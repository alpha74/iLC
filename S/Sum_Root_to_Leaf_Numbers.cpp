// Return sum of all numbers represented as digits from root to leaf
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 9.3 MB Beats 52.62%
void checkPathSum( TreeNode *root, int currSum, int &ret, int row )
{
    if( root == NULL )
        return ;

    currSum = (currSum * 10 ) + root -> val ;

    if( root -> left == NULL && root -> right == NULL )
    {
        ret += currSum ;

        return ;
    }

    if( root -> left != NULL )
        checkPathSum(root->left, currSum, ret, row ) ;

    if( root -> right != NULL )
        checkPathSum( root->right, currSum , ret, row ) ;
}

int sumNumbers(TreeNode* root) 
{
    int ret = 0 ;
    int curr = 0 ;

    if( root == NULL )
        return ret ;

    checkPathSum( root, 0, ret, curr ) ;    
    return ret ;    
}   
