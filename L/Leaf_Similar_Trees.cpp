// Check if two BTs are leaf similar
// https://leetcode.com/problems/leaf-similar-trees/
// Aman Kumar

// Runtime 0ms Beats 100.00% of users with C++
// Memory 13.20MB Beats81.10% of users with C++
void inorder( TreeNode *root, vector<int> &ret )
{
    if( root == NULL )
        return ;

    // Store only leaf nodes
    if( root -> left == NULL && root -> right == NULL )
    {
        ret.push_back( root -> val ) ;
        return ;
    }
    inorder( root -> left, ret ) ;
    inorder( root -> right, ret ) ;
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) 
{
    vector<int> leaf1, leaf2 ;

    inorder(root1, leaf1) ;
    inorder(root2, leaf2 ) ;

    if( leaf1.size() != leaf2.size() )
        return false ;

    for( int i = 0 ; i < leaf1.size() ; i++ )
    {
        if( leaf1[i] != leaf2[i] )
            return false ;
    }

    return true ;
}
