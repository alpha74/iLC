// Construct string comprising of parenthesis from binary tree
// https://leetcode.com/problems/construct-string-from-binary-tree/
// Aman Kumar

// Runtime: 26 ms, faster than 88.07% of C++ online submissions for Construct String from Binary Tree.
// Memory Usage: 23.4 MB, less than 89.65% of C++ online submissions for Construct String from Binary Tree.
void genString(TreeNode *root, string &ret)
{
    if( root == NULL )
        return ;

    ret += to_string( root -> val ) ;
    if( root -> left != NULL )
    {
        ret += "(" ;
        genString( root -> left, ret) ;
        ret += ")" ;
    }
    if( root -> right != NULL )
    {
        if( root -> left == NULL )
            ret += "()" ;
        ret += "(" ;
        genString( root -> right, ret) ;
        ret += ")" ;
    }
}

string tree2str(TreeNode* root) 
{
    string ret = "" ;

    genString( root, ret ) ;

    return ret ;
}
