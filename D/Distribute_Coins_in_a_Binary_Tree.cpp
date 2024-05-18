// Distribute coins in a binary tree such that eacn node has 1 coin
// https://leetcode.com/problems/distribute-coins-in-binary-tree/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 13.9 MB Beats 51.77%
int getExtraCoins( TreeNode *root, int &ret )
{
    if(root == NULL)
        return 0 ;
    
    int leftCoins = getExtraCoins(root -> left, ret) ;
    int rightCoins = getExtraCoins(root -> right, ret) ;
    
    // The number of movements will be abs sum of left and right part
    ret += abs(leftCoins) + abs(rightCoins) ;
    
    // To understand, consider a simple tree 
    // with a left node and right node having 0 coins and root having 3 coins.
    return root -> val + leftCoins  + rightCoins - 1 ;
}

int distributeCoins(TreeNode* root) 
{
    int ret = 0 ;
    getExtraCoins(root, ret) ;
    return ret ;
}
