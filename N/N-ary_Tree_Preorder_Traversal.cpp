// Preorder traversal of N-ary tree
// https://leetcode.com/problems/n-ary-tree-preorder-traversal/
// Aman Kumar

// Runtime 19 ms Beats 88.88%
// Memory 11.8 MB Beats 18.5%
void Npreorder( Node *root, vector<int> &ret )
{
    if( root == NULL )
        return ;

    vector<Node*> curr = root -> children ;

    if( curr.size() == 0 )
        return ;

    for( int i = 0 ; i < curr.size() ; i++ )
    {
        ret.push_back( curr[i] -> val ) ;
        Npreorder( curr[i], ret ) ;
    }
}

vector<int> preorder(Node* root) 
{
    vector<int> ret ;

    if( root != NULL )
    {
        ret.push_back( root -> val ) ;
        Npreorder( root, ret ) ;
    }


    return ret ;    
}
