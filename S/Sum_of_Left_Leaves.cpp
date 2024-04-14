// Return sum of left leaves in a binary tree
// https://leetcode.com/problems/sum-of-left-leaves/
// Aman Kumar

// Runtime 0ms Beats 100.00% of users with C++
// Memory 14.80MB Beats 48.75% of users with C++
void inorder(TreeNode *root, int &sum)
{
    if(root == NULL)
        return;
    
    // If leaf node, return
    if(root -> left == NULL && root -> right == NULL)
        return;
    
    TreeNode *leftChild = root -> left;
    
    if(leftChild != NULL && (leftChild -> left == NULL && leftChild -> right == NULL))
        sum += (leftChild -> val);

    inorder(leftChild, sum);
    inorder(root -> right, sum);
}

int sumOfLeftLeaves(TreeNode* root) 
{
    int ret = 0 ;
    inorder(root, ret);
    return ret;    
}
