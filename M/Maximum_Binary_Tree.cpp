// Construct binary tree by recursively making max num as root
// https://leetcode.com/problems/maximum-binary-tree/description/
// Aman Kumar

// Runtime 80 ms Beats 93.78%
// Memory 42.7 MB Beats 39.21%
TreeNode *buildTree(vector<int> &nums, int i, int n)
{
    int maxIndex = i ;

    if(i == n)
        return new TreeNode(nums[i]) ;
    else if( i > n )
        return NULL ;

    int start = i ;

    for( ; i <= n ; i++ )
    {   
        if( nums[maxIndex] < nums[i] ) 
            maxIndex = i ;
    }

    TreeNode *root = new TreeNode(nums[maxIndex]) ;

    root -> left = buildTree(nums, start, maxIndex-1);
    root -> right = buildTree(nums, maxIndex+1, n );

    return root ;
}

TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
{
    return buildTree(nums, 0, nums.size()-1) ;
}
