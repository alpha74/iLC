// Smallest string starting from leaf
// https://leetcode.com/problems/smallest-string-starting-from-leaf/description/
// Aman Kumar

// Runtime 8ms Beats65.38%of users with C++
// Memory 20.87MB Beats29.76%of users with C++
string getStringChar(int &n)
{
    string ret = "" ;
    ret += ('a' + n) ;

    return ret ;
}

void checkSmallest( TreeNode *root, vector<string> &strList, string curr)
{
    if(root == NULL)
        return ;
    
    curr = getStringChar(root -> val) + curr ;
    
    // Store string when leaf node
    if(root -> left == NULL && root -> right == NULL)
    {
        strList.push_back(curr) ;
        return ;
    }

    checkSmallest(root -> left, strList, curr) ;
    checkSmallest(root -> right, strList, curr) ;
}    

string smallestFromLeaf(TreeNode* root) 
{
    vector<string> strList ;
    string curr = "" ;

    checkSmallest(root, strList, curr);
    sort(strList.begin(), strList.end());

    return strList[0] ;
}
