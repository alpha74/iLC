// Sum of left leaves
// https://leetcode.com/problems/sum-of-left-leaves/
// Aman Kumar

void leftSum( TreeNode *root, int &sum)
{
    if( root == NULL )
        return ;

    leftSum( root -> left, sum ) ;
    leftSum( root -> right, sum ) ;

    if( root -> left != NULL && root -> left -> left == NULL && root -> left -> right == NULL )
        sum += ( root -> left -> val ) ;
}

int sumOfLeftLeaves(TreeNode* root) 
{
    if( root == NULL )
        return 0 ;

    int sum = 0 ;
    leftSum( root, sum ) ;

    return sum ;
}
