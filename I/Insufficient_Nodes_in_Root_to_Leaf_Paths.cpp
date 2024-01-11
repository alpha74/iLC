// Delete all insufficient nodes in root to leaf paths
// https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/description/
// Aman Kumar

// Runtime 23ms Beats97.74%of users with C++
// Memory 34.81MB Beats5.26%of users with C++
bool checkSum(TreeNode *root, int prevSum, int &limit)
{
    if(root == NULL)
        return false;

    prevSum += root -> val;
    
    if(root -> left == NULL && root -> right == NULL)
    {
        if(prevSum < limit)
            return false;
        return true;
    }

    bool leftFlag = checkSum(root -> left, prevSum, limit);
    bool rightFlag = checkSum(root -> right, prevSum, limit);

    // Delete node if child node is insufficient
    if(!leftFlag)
    {
        TreeNode *del = root -> left;
        root -> left = NULL;
        delete del;
    }
    
    if(!rightFlag)
    {
        TreeNode *del = root -> right;
        root -> right = NULL;
        delete del;
    }

    return leftFlag || rightFlag;
}

TreeNode* sufficientSubset(TreeNode* root, int limit) 
{
    if(!checkSum(root, 0, limit))
        return NULL;
    
    return root;
}
