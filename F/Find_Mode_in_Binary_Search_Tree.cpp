// Find mode in a BST with duplicates
// https://leetcode.com/problems/find-mode-in-binary-search-tree/
// Aman Kumar

// Runtime: 24 ms, faster than 83.46% of C++ online submissions for Find Mode in Binary Search Tree.
// Memory Usage: 25.3 MB, less than 58.74% of C++ online submissions for Find Mode in Binary Search Tree.
void inorder( TreeNode *root, unordered_map<int,int> &freq, int &maxFreq )
{
    if( root == NULL )
        return ;

    inorder( root -> left, freq, maxFreq ) ;
    freq[ root -> val ]++ ;

    maxFreq = max( maxFreq, freq[ root -> val ]) ;
    inorder( root -> right, freq, maxFreq ) ;
}

vector<int> findMode(TreeNode* root) 
{
    unordered_map<int,int> freq ;
    int maxFreq = 0 ;

    inorder( root, freq, maxFreq ) ;

    vector<int> ret ;

    for( auto iter = freq.begin() ; iter != freq.end() ; iter++ )
    {
        if( iter -> second == maxFreq )
            ret.push_back( iter -> first ) ;
    }

    return ret ;
}
