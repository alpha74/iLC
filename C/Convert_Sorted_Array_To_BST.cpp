// Convert a sorted array to binary search tree
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// Aman Kumar

TreeNode *makeBST(vector<int> &nums, int l, int r)
{
    if( l > r )
        return NULL ;

    int m = (l+r)/2 ;

    TreeNode *root = new TreeNode(nums[m] ) ;

    root -> left = makeBST( nums, l, m-1) ;
    root -> right = makeBST( nums, m+1, r ) ;

    return root ;
}

TreeNode* sortedArrayToBST(vector<int>& nums) 
{
    return makeBST(nums, 0, nums.size() -1) ;    
}
