// Distribute coins in a binary tree such that eacn node has 1 coin
// 
// Aman Kumar

int getExtraCoins( TreeNode *root, int &ret )
{
    if( root == NULL )
        return 0 ;

    int leftCoins = getExtraCoins( root -> left, ret ) ;
    int rightCoins = getExtraCoins( root -> right, ret ) ;

    // The number of movements will be abs sum of left and right extra coins
    ret += abs( leftCoins ) + abs( rightCoins ) ;

    // To understand, consider a simple tree with a left node and right node having 0 coins and root having 3 coins.
    return root -> val + leftCoins  + rightCoins - 1 ;
}

int distributeCoins(TreeNode* root) 
{
    int ret = 0 ;

    getExtraCoins( root, ret ) ;

    return ret ;
}
