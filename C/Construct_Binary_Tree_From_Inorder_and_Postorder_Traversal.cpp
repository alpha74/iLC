// Build binary tree from given inorder and postorder traversal
// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/
// Aman Kumar

// Runtime 14 ms Beats 87.48%
// Memory 26.4 MB Beats 63.37%
TreeNode *build(vector<int> &in, vector<int> &po, int starti, int endi, int startp, int endp, unordered_map<int,int> &hash)
{
    if(starti > endi)
        return NULL ;

    int rootVal = po[ endp ] ;
    int rootValIndex = -1 ;

    // Find rootVal in inorder
    rootValIndex = hash[ rootVal ] ;

    // Create new node
    TreeNode *root = new TreeNode(rootVal) ;

    // Number of elements in left subtree
    int countLeftSubtree = rootValIndex - starti - 1 ;

    // New left index for postorder
    int poLeftIndex = countLeftSubtree + startp ;

    root -> left = build(in, po, starti, rootValIndex-1, startp, poLeftIndex, hash ) ;
    root -> right = build(in, po, rootValIndex+1, endi, poLeftIndex+1, endp-1, hash) ;

    return root ;
}


TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
{
    unordered_map<int,int> hash ;

    // Build val to index map
    for( int i = 0 ; i < inorder.size() ; i++ )
    {
        hash[ inorder[i] ] = i ;
    }

    // Last node of post order is root
    return build(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1, hash);
}
