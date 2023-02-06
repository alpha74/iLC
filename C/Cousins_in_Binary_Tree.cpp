// Check if given values are cousin in a binary tree
// https://leetcode.com/problems/cousins-in-binary-tree/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 11 MB Beats 47.47%
void getDepthParent(TreeNode *root, int &x, vector<int> &info, int d)
{
    if( root == NULL )
        return ;

    if( root -> left != NULL && root -> left -> val == x)
    {
        info[0] = d+1 ;
        info[1] = root -> val ;

        return ;
    }
    else if( root -> right != NULL && root -> right -> val == x)
    {
        info[0] = d+1 ;
        info[1] = root -> val ;

        return ;
    }

    getDepthParent( root -> left, x, info, d+1) ;

    if( info[0] != 0 )
        return ;

    getDepthParent( root -> right, x, info, d+1) ;
}

bool isCousins(TreeNode* root, int x, int y) 
{
    // 0th -> depth, 1st : parent val
    vector<int> xinfo(2,0);
    getDepthParent(root, x, xinfo, 1 ) ;

    vector<int> yinfo(2,0) ;
    getDepthParent(root, y, yinfo, 1 ) ;

    if( xinfo[0] == yinfo[0] && xinfo[1] != yinfo[1] )
        return true ;
    return false ;
}
