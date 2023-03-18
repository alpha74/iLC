// Construct binary tree from given preorder and inorder traversal
// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
// Aman Kumar

// Runtime 16 ms Beats 83.97%
// Memory 26.5 MB Beats 33.22%
TreeNode *build(vector<int> &pre, vector<int> &in, int pStart, int pEnd, int inStart, int inEnd, unordered_map<int,int> &hash)
{
    if(inStart > inEnd || pStart > pEnd)
        return NULL ;

    // Find ps val in inorder
    int i = hash[ pre[pStart]] ;

    TreeNode *root = new TreeNode(pre[ pStart ]) ;
    int j = i - inStart ;    

    root -> left = build(pre, in, pStart +1, pStart +j, inStart, i-1, hash) ;
    root -> right = build(pre, in, pStart +1 +j, pEnd, i+1, inEnd, hash) ;

    return root ;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
{
    unordered_map<int,int> hash ;

    for( int i = 0 ; i < inorder.size() ; i++ )
        hash[ inorder[i] ] = i ;

    int preStart = 0, preEnd = preorder.size()-1, inStart = 0, inEnd = inorder.size()-1 ;
    return build(preorder, inorder, preStart, preEnd, inStart, inEnd, hash) ;
/*
1,2,3
2,3,1
*/
}
