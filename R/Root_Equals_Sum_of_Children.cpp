// Check if value of root is equal to sum of children values.
// https://leetcode.com/problems/root-equals-sum-of-children/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Root Equals Sum of Children.
// Memory Usage: 12.5 MB, less than 87.71% of C++ online submissions for Root Equals Sum of Children.
bool checkTree(TreeNode* root) 
{
    return (root->val) == (root->left->val) + (root->right->val) ;
}
