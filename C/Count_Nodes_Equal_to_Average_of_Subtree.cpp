// Count nodes whose value is equal to avg of subtree
// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
// Aman Kumar

// Runtime: 12 ms, faster than 68.17% of C++ online submissions for Count Nodes Equal to Average of Subtree.
// Memory Usage: 12 MB, less than 41.18% of C++ online submissions for Count Nodes Equal to Average of Subtree.
pair<int,int> getAvgNodes(TreeNode *root, int &count)
{
    pair<int,int> ret(0,0) ;

    if( root == NULL )
        return ret ;

    if( root -> left == NULL && root -> right == NULL )
    {
        ret.first = root -> val ;
        ret.second = 1 ;
        count++ ;

        return ret ;
    }

    pair<int,int> left(0,0) ;

    // Add sum of left sub tree
    if( root -> left != NULL )
    {
        pair<int,int> left = getAvgNodes(root -> left, count) ;

        ret.first += left.first ;
        ret.second += left.second ;
    }

    // Add sum of right sub tree
    if( root -> right != NULL )
    {
        left = getAvgNodes(root -> right, count) ;

        ret.first += left.first ;
        ret.second += left.second ;
    }

    // Add root node val to sum
    ret.first += root -> val ;
    ret.second += 1 ;

    if( root -> val == ret.first / ret.second)
        count++ ;

    return ret ;
}

int averageOfSubtree(TreeNode* root) 
{
    int count = 0 ;   
    getAvgNodes(root, count) ;
    return count ;
/*
[1,0]
[1,2,1]
[1,null,0]
*/
}
