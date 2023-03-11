// Maximum difference between node and its ancestor node
// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 9.7 MB Beats 86.83%
void traverse( TreeNode* root, int &maxd, pair<int,int> r)
{
    if( root == NULL )
        return ;

    int curr = root -> val ;

    maxd = max( maxd, abs( curr - r.first )) ;
    maxd = max( maxd, abs( curr - r.second )) ;

    // Update min
    if( curr < r.first)
        r.first = curr ;

    // Update max
    if( curr > r.second )
        r.second = curr ;

    traverse( root -> left, maxd, r ) ;
    traverse( root -> right, maxd, r ) ;
}

int maxAncestorDiff(TreeNode* root) 
{
    if( root == NULL || ( root -> left == NULL && root -> right == NULL))
        return 0 ;

    int maxd = 0 ;
    pair<int,int> range = { root -> val, root -> val } ;

    traverse( root -> left, maxd, range ) ;
    traverse( root -> right, maxd, range ) ;

    return maxd ;
}
