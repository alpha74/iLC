// Return reversed level order traversal of binary tree
// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
// Aman Kumar

// Runtime 3 ms Beats 84.49%
// Memory 12.6 MB Beats 37.7%
vector<vector<int>> levelOrderBottom(TreeNode* root) 
{
    vector<vector<int>> ret ;

    if(root == NULL)
        return ret ;

    queue<TreeNode*> q ;
    q.push(root) ;

    while(!q.empty())
    {
        int qlen = q.size() ;
        vector<int> row ;

        for( int i = 0 ; i < qlen ; i++ )
        {
            TreeNode *curr = q.front() ;
            q.pop() ;

            row.push_back(curr -> val) ;

            if(curr -> left)
                q.push(curr -> left) ;
            if(curr -> right)
                q.push(curr -> right) ;
        }

        ret.push_back( row ) ;
    }  

    reverse(ret.begin(), ret.end()) ;
    return ret ;   
}
