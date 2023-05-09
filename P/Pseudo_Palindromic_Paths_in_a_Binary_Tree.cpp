// Return count of pseudo-palindromic paths from root to leaf in given binary tree
// https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/description/
// Aman Kumar

// Runtime 364 ms Beats 76.45%
// Memory 181 MB Beats 58.87%
bool pseudoPalindrome(vector<int> &freq)
{
    bool oddCount = false ;

    for(int i = 0 ; i < 10 ; i++)
    {
        if(freq[i] % 2 == 1)
        {
            if(oddCount)
                return false ;
            else
                oddCount = true ;
        }
    }

    return true ;
}

void traverse(TreeNode *root, int &count, vector<int> &freq)
{
    if(root == NULL)
        return ;

    freq[ root -> val]++ ;

    if(root -> left == NULL && root -> right == NULL)
    {
        if(pseudoPalindrome(freq))
            count++ ;
    }

    traverse(root -> left, count, freq) ;
    traverse(root -> right, count, freq) ;

    freq[ root -> val]-- ;
}

int pseudoPalindromicPaths (TreeNode* root) 
{
    int count = 0 ;

    vector<int> freq(10,0) ;
    traverse(root, count, freq) ;

    return count ;    
}
