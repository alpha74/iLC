// Convert given maximum BST to Greater Sum Tree
// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 8.4 MB Beats 5.82%
void inorder(TreeNode *root, vector<int> &nums, int &sum)
{
    if( root == NULL )
        return ;

    inorder(root -> left, nums, sum);
    nums.push_back( root -> val );
    sum += root -> val ;

    inorder(root -> right, nums, sum);
}

void updateTree(TreeNode *root, map<int,int> &valSum)
{
    if( root == NULL )
        return ;

    updateTree(root -> left, valSum) ;
    root -> val = valSum[ root -> val ] ;
    updateTree(root -> right, valSum) ;
}

TreeNode* bstToGst(TreeNode* root) 
{
    int totalSum = 0 ;

    vector<int> nums;
    inorder(root, nums, totalSum) ;

    map<int,int> valSum ;

    for(int i = 0 ; i < nums.size() ; i++ )
    {
        valSum[ nums[i] ] = totalSum ;
        totalSum -= nums[i] ;
    }

    updateTree(root, valSum);

    return root ;
}
