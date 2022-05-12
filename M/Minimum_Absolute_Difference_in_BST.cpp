// Find min absolute difference between nodes of BST
// https://leetcode.com/problems/minimum-absolute-difference-in-bst/
// Aman Kumar

void inorder( TreeNode *root, vector<int> &num )
{
    if( root == NULL )
        return ;

    inorder( root -> left, num ) ;
    num.push_back( root -> val ) ;
    inorder( root -> right, num ) ;
}

int getMinimumDifference(TreeNode* root) 
{
    vector<int> num ;

    inorder( root, num ) ;

    int diff = INT_MAX ;

    for( int i = 1 ; i < num.size() ; i++ )
    {
        if( num[i] - num[i-1] < diff )
            diff = num[i] - num[i-1] ;
    }

    return diff ;
}
