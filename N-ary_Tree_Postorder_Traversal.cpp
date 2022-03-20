// Postorder traversal of N-ary tree
// https://leetcode.com/problems/n-ary-tree-postorder-traversal/
// Aman Kumar

void Npostorder( Node *root, vector<int> &ret )
{
    if( root == NULL )
        return ;

    vector<Node*> curr = root -> children ;

    if( curr.size() == 0 )
        return ;

    for( int i = 0 ; i < curr.size() ; i++ )
    {
        Npostorder( curr[i], ret ) ;
        ret.push_back( curr[i] -> val ) ;
    }
}

vector<int> postorder(Node* root) 
{
    vector<int> ret ;

    Npostorder( root, ret ) ;

    if( root != NULL )
        ret.push_back( root -> val ) ;

    return ret ;
}
