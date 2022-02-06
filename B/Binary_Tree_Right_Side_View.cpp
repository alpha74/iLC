// Right View of Binary tree
// https://leetcode.com/problems/binary-tree-right-side-view/
// Aman Kumar

void vlr( TreeNode *root, int &curr, vector<int> &ret, int v)
{
    if( root == NULL )
        return ;

    if( v > curr )
    {
        ret.push_back( root -> val ) ;
        curr = v ;
    }
    vlr( root -> right, curr, ret, v+1 ) ;
    vlr( root -> left, curr, ret, v+1) ;
}

vector<int> rightSideView(TreeNode* root) 
{
    vector<int> ret ;
    if( root == NULL )
        return ret ;

    ret.push_back( root -> val );
    if( root -> left == NULL && root -> right == NULL )
        return ret ;

    int curr = 0 ;

    vlr( root -> right, curr, ret, 1 ) ;
    vlr( root -> left, curr, ret, 1) ;

    return ret ;
}
