// Return sum of nodes having even-valued grandparent nodes.
// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
// Aman Kumar

// Runtime: 59 ms, faster than 80.95% of C++ online submissions for Sum of Nodes with Even-Valued Grandparent.
// Memory Usage: 41.4 MB, less than 43.56% of C++ online submissions for Sum of Nodes with Even-Valued Grandparent.
void traverse(TreeNode *root, TreeNode *parent, TreeNode *gparent, int &sum)
{
    if( root == NULL )
        return ;

    if( gparent != NULL && gparent -> val % 2 == 0 )
        sum += root -> val ;

    traverse( root -> left, root, parent, sum) ;
    traverse( root -> right, root, parent, sum) ;
}

int sumEvenGrandparent(TreeNode* root) 
{
    int sum = 0 ;

    traverse(root, NULL, NULL, sum ) ;

    return sum ;
}
