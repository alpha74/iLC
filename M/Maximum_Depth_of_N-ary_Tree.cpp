// Get height of N-ary tree
// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/submissions/
// Aman Kumar

int getHeight( Node *root)
{
    if( root == NULL )
        return 0 ;

    int h = 0 ;
    vector<Node*> child = root -> children ;

    for( int i = 0 ; i < child.size() ; i++ )
    {
        h = max(h, getHeight( child[i] )) ;
    }

    return 1+h ;
}

int maxDepth(Node* root) 
{
    return getHeight(root) ;
}
