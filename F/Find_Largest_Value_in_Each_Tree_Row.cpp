// Find largest value in each tree row
// https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/
// Aman Kumar

// Runtime 15 ms Beats 79.15%
// Memory 22.3 MB Beats 18.81%
vector<int> largestValues(TreeNode* root) 
{
    vector<int> ret ;
    queue<TreeNode*> q1, q2 ;

    if(root == NULL)
        return ret ;

    q1.push(root);

    while( !q1.empty() || !q2.empty() )
    {
        int maxNum = INT_MIN ;
        if(!q1.empty()) 
        {
            while(!q1.empty())
            {
                TreeNode *currNode = q1.front() ;
                q1.pop() ;

                if(currNode -> left)
                    q2.push(currNode -> left);
                if(currNode -> right)
                    q2.push(currNode -> right);

                maxNum = max(maxNum, currNode -> val) ;
            }

        }

        else if(!q2.empty()) 
        {
            while(!q2.empty())
            {
                TreeNode *currNode = q2.front() ;
                q2.pop() ;

                if(currNode -> left)
                    q1.push(currNode -> left);
                if(currNode -> right)
                    q1.push(currNode -> right);

                maxNum = max(maxNum, currNode -> val) ;
            }

        }

        ret.push_back(maxNum);
    }

    return ret ;  
}
