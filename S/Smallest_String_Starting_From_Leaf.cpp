// Smallest string starting from leaf
// https://leetcode.com/problems/smallest-string-starting-from-leaf/description/
// Aman Kumar

// Runtime 9 ms Beats 88.68%
// Memory 20.3 MB Beats 14.83%
string getStringChar(int &n)
{
    string ret = "" ;
    ret += ('a' + n) ;

    return ret ;
}

void checkSmallest( TreeNode *root, vector<string> &strList, string curr)
{
    if( root == NULL )
        return ;

    curr = getStringChar( root -> val ) + curr ;

    if( root -> left == NULL && root -> right == NULL )
    {
        strList.push_back( curr ) ;
        return ;
    }

    checkSmallest( root -> left, strList, curr ) ;
    checkSmallest( root -> right, strList, curr ) ;
}    

string smallestFromLeaf(TreeNode* root) 
{
    vector<string> strList ;
    string curr = "" ;

    checkSmallest( root, strList, curr ) ;

    sort( strList.begin(), strList.end() );

    return strList[0] ;

/*
[4,0,1,1]
[0,1,3,4,3,4]
[0]

[0,1]
[0,1,null,4]
[4,0,0,1]

[25,1,3,1,3,0,2,0,1,3,4,3,4]
[2,2,1,null,1,0,null,0,0,1,3,4,3,4] 
[25,1,null,0,0,1,null,null,null,0]
*/
}
