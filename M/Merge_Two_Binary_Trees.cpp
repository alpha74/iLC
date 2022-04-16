// Merge two binary trees such that overlapping nodes are summed
// 
// Aman Kumar

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
{
    TreeNode *head = NULL ;

    if( root1 != NULL && root2 != NULL )
        head = new TreeNode( root1 -> val + root2 -> val ) ;

    else if( root1 != NULL && root2 == NULL )
        head = new TreeNode( root1 -> val ) ;

    else if( root1 == NULL && root2 != NULL )
        head = new TreeNode( root2 -> val ) ;
    else
      return head ;

    TreeNode *root1Left = NULL ;
    TreeNode *root1Right = NULL ;

    if( root1 != NULL && root1 -> left != NULL )
        root1Left = root1 -> left ;
    if( root1 != NULL && root1 -> right != NULL )
        root1Right = root1 -> right ;

    TreeNode *root2Left = NULL ;
    TreeNode *root2Right = NULL ;

    if( root2 != NULL && root2 -> left != NULL )
        root2Left = root2 -> left ;
    if( root2 != NULL && root2 -> right != NULL )
        root2Right = root2 -> right ;

    head -> left = mergeTrees( root1Left, root2Left ) ;
    head -> right = mergeTrees( root1Right, root2Right ) ;

    return head ;
}
