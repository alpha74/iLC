// Return all paths from root to leaf as list of strings
// https://leetcode.com/problems/sum-root-to-leaf-numbers/
// Aman Kumar

void recur( TreeNode* root, vector<string> &ret, string curr)
{
    if( root == NULL )
        return ;

    if( root -> left == NULL && root -> right == NULL )
    {
        curr += "->" ;
        curr += to_string(root->val);

        ret.push_back(curr) ;
        return ;
    }

    curr += "->" ;
    curr += to_string( root -> val) ;

    recur( root -> left, ret, curr ) ;
    recur( root -> right, ret, curr ) ;
}

vector<string> binaryTreePaths(TreeNode* root) 
{
    vector<string> ret;

    // If root is empty
    if( root == NULL )
        return ret ;

    string curr = to_string( root -> val ) ;

    // If root is leaf
    if( root -> left == NULL && root -> right ==  NULL )
    {
        curr = to_string( root -> val);
        ret.push_back( curr ) ;
        return ret ;
    }

    recur( root -> left, ret, curr ) ;
    recur( root -> right, ret, curr ) ;

    return ret ;
}
