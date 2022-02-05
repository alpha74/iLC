// Delete leaves in BT with given target value
// https://leetcode.com/problems/delete-leaves-with-a-given-value/
// Aman Kumar

TreeNode *deleteLeaf( TreeNode *root, int &t)
{
    if( root == NULL )
        return NULL ;

    root -> left = deleteLeaf( root -> left, t ) ;
    root -> right = deleteLeaf( root -> right, t ) ;

    if( (root-> left == NULL && root -> right == NULL ) && root -> val == t )
    {
        // delete root ;
        return NULL ;
    }

    return root ;
}

TreeNode* removeLeafNodes(TreeNode* root, int target) 
{
    return deleteLeaf( root, target ) ;  
/*
[1,1,1]
1

*/
}
