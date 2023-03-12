// Return Lowest Common Ancestor node for two given nodes in a BST
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
// Aman Kumar

// Runtime 26 ms Beats 92.36%
// Memory 23.2 MB Beats 75.87%
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
{
    int current = root->val ;

    if( p -> val < current && q -> val < current) 
    {
        return lowestCommonAncestor(root -> left, p, q);
    }
    else if( p -> val > current && q -> val > current) 
    {
        return lowestCommonAncestor(root -> right, p, q);
    }
    else
        return root ;
}
