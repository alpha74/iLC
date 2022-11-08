// Two Sum with BST
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
// Aman Kumar

// Runtime: 42 ms, faster than 93.72% of C++ online submissions for Two Sum IV - Input is a BST.
// Memory Usage: 36.7 MB, less than 89.31% of C++ online submissions for Two Sum IV - Input is a BST.
void inorder( TreeNode *root, vector<int> &arr )
{
    if( root == NULL )
        return ;

    inorder( root -> left, arr ) ;
    arr.push_back( root -> val ) ;
    inorder( root -> right, arr ) ;
}

bool findTarget(TreeNode* root, int k) 
{
    vector<int> arr ;

    inorder(root, arr) ;

    bool ret = false ;

    int i = 0, j = arr.size() - 1 ;

    while(i < j && !ret )
    {
        int sum = arr[i] + arr[j] ;

        if( sum == k )
            ret = true ;

        else if( sum > k )
            j-- ;

        else
            i++ ;
    }

    return ret ;
}
