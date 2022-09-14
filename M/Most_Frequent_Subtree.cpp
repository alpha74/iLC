// Return most frequent sum of nodes of a subtree
// https://leetcode.com/problems/most-frequent-subtree-sum/
// Aman Kumar

// Runtime: 31 ms, faster than 53.70% of C++ online submissions for Most Frequent Subtree Sum.
// Memory Usage: 24.6 MB, less than 50.00% of C++ online submissions for Most Frequent Subtree Sum
int sumTree(TreeNode* root, unordered_map<int,int> &freq, int &maxf)
{
    // Leaf node
    if( root -> left == NULL && root -> right == NULL )
    {
        freq[ root -> val]++ ;

        maxf = max( maxf, freq[ root -> val ]) ;

        return root -> val ;
    }

    int sum = 0 ;
    if( root -> left != NULL )
    {
        int lsum = 0 ;
        lsum = sumTree(root -> left, freq, maxf);
        sum += lsum ;
    }
    if( root -> right != NULL)
    {
        int rsum = 0 ;
        rsum = sumTree(root -> right, freq, maxf) ;
        sum += rsum ;
    }

    sum += root -> val ;

    freq[ sum ]++ ;

    maxf = max( maxf, freq[ sum ]) ;
    return sum ;
}

vector<int> findFrequentTreeSum(TreeNode* root) 
{
    unordered_map<int,int> freq ;
    int maxF = 0 ;

    int csum = sumTree( root, freq, maxF) ;

    vector<int> ret ;

    // Fill elements having freq maxF
    for( auto iter = freq.begin() ; iter != freq.end() ; iter++ )
    {
        if( iter -> second == maxF )
            ret.push_back( iter -> first ) ;
    }
    return ret ;
}
