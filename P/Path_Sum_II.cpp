// Return root to leaf paths having sum = target
// https://leetcode.com/problems/path-sum-ii/
// Aman Kumar

void checkPathSum( TreeNode *root, int currSum, int &t, vector<vector<int>> &ret, vector<int> row )
{
    if( root == NULL )
        return ;

    currSum += root -> val ;
    row.push_back( root -> val ) ;

    if( root -> left == NULL && root -> right == NULL )
    {
        if( currSum == t )
            ret.push_back( row ) ;

        return ;
    }

    if( root -> left != NULL )
        checkPathSum(root->left, currSum, t, ret, row ) ;

    if( root -> right != NULL )
        checkPathSum( root->right, currSum, t , ret, row ) ;
}


vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
{
    vector<vector<int>> ret ;
    vector<int> row ;

    if( root == NULL )
        return ret ;

    checkPathSum( root, 0, targetSum, ret, row ) ;    
    return ret ;
}
