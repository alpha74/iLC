// Count good nodes in binary tree
// https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/
// Aman Kumar

// Runtime 139 ms Beats 78.41%
// Memory 86.3 MB Beats 61%
void checkGoodNodes(TreeNode *root, int &count, int cmax)
{
    if(root == NULL)
        return ;

    if( root -> val >= cmax)
        count++ ;

    checkGoodNodes(root -> left, count, max(cmax, root -> val) );
    checkGoodNodes(root -> right, count, max(cmax, root -> val) );
}

int goodNodes(TreeNode* root) 
{
    int count = 1 ;

    checkGoodNodes(root -> left, count, root -> val) ;
    checkGoodNodes(root -> right, count, root -> val) ;

    return count ;    
}
