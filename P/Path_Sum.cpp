// Check if tree path exists from root to leaf having sum as Target
// https://leetcode.com/problems/path-sum/
// Aman Kumar

bool checkPathSum( TreeNode *root, int currSum, int &t)
{
    if( root == NULL )
        return false ;

    currSum += root -> val ;

    if( root -> left == NULL && root -> right == NULL )
    {
        if( currSum == t )
            return true ;
        else
            return false ;
    }

    return checkPathSum( root -> left, currSum, t ) || checkPathSum( root -> right, currSum, t ) ;
}

bool hasPathSum(TreeNode* root, int targetSum) 
{
    if( root == NULL )
        return false ;


    return checkPathSum( root, 0, targetSum ) ;
}
