// Return sorted list of elements from two BSTs including duplicates.
// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
// Aman Kumar

// Runtime: 165 ms, faster than 92.70% of C++ online submissions for All Elements in Two Binary Search Trees.
// Memory Usage: 86.9 MB, less than 13.64% of C++ online submissions for All Elements in Two Binary Search Trees.
void inorder(TreeNode *root, vector<int> &ret)
{
    if( root == NULL )
        return ;

    inorder( root -> left, ret ) ;
    ret.push_back( root -> val ) ;
    inorder( root -> right, ret ) ;
}

vector<int> mergeSortedList(vector<int> &l1, vector<int> &l2)
{
    vector<int> ret ;

    int i = 0, j = 0 ;

    for( ; i < l1.size() && j < l2.size() ; )
    {
        if( l1[i] == l2[j] )
        {
            ret.push_back( l1[i] ) ;
            ret.push_back( l1[i] ) ;
            i++ ;
            j++ ;
        }
        else if( l1[i] < l2[j])
        {
            ret.push_back( l1[i] ) ;
            i++ ;
        }
        else
        {
            ret.push_back( l2[j] ) ;
            j++ ;
        }
    }

    if( i < l1.size() )
    {
        for( ; i < l1.size() ; i++ )
            ret.push_back( l1[i] ) ;
    }
    else
    {
        for( ; j < l2.size() ; j++ )
            ret.push_back( l2[j] ) ;
    }

    return ret ;
}

vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
{
    vector<int> list1 ;
    vector<int> list2 ;

    inorder(root1, list1) ;
    inorder(root2, list2) ;

    return mergeSortedList(list1,list2) ;
}
