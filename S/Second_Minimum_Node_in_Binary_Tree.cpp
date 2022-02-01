// Return second min node in binary tree
// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/
// Aman Kumar

void inorder( TreeNode *root, map<int,bool> &hash )
{
    if( root == NULL )
        return ;
    inorder( root -> left, hash ) ;
    hash[ root -> val ] = true ;
    inorder( root -> right, hash ) ;
}

int findSecondMinimumValue(TreeNode* root) 
{
    map<int,bool> hash ;

    inorder( root, hash ) ;

    if( hash.size() < 2 )
        return -1 ;

    auto iter = hash.begin() ;
    iter++ ;
    return iter -> first ;
}
