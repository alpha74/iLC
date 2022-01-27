// Check if given two binary trees are same
// https://leetcode.com/problems/same-tree/
// Aman Kumar

bool isSameTree(TreeNode* p, TreeNode* q) 
{
    if( p == NULL && q == NULL )
        return true ;
    else if( p == NULL || q == NULL )
        return false ;

    if( p-> val != q -> val )
        return false ;

    if( isSameTree( p -> left, q -> left ) == false )
        return false ;

    if( isSameTree( p -> right, q -> right ) == false )
        return false ;

    return true ;
}
