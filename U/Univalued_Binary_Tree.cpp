// Check if all nodes of BT has one value
// https://leetcode.com/problems/univalued-binary-tree/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Univalued Binary Tree.
// Memory Usage: 10 MB, less than 8.49% of C++ online submissions for Univalued Binary Tree.
void inorder(TreeNode* root, unordered_map<int,int> &hash )
{
    if( root == NULL )
        return ;

    inorder( root -> left, hash );
    hash[ root -> val ]++ ;
    inorder( root -> right, hash ) ;
}

bool isUnivalTree(TreeNode* root) 
{
    unordered_map<int,int> hash ;

    inorder(root, hash) ;

    if( hash.size() > 1 )
        return false ;
    return true ;
}
