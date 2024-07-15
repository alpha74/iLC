// Create binary tree from given descriptions
// https://leetcode.com/problems/create-binary-tree-from-descriptions
// Aman Kumar

// Runtime 680ms Beats 71.62%
// Memory 276.31MB Beats 59.39%
TreeNode* createBinaryTree(vector<vector<int>>& descriptions) 
{
    unordered_map<int,TreeNode*> nodeMap;
    // For each node, check how many parents are there
    unordered_map<int,int> parentCountMap;
    int n = descriptions.size();

    for(int i = 0 ; i < n ; i++)
    {
        int parent = descriptions[i][0];
        int child = descriptions[i][1];
        bool isLeft = descriptions[i][2];

        TreeNode *parentNode = NULL;
        TreeNode *childNode = NULL;

        if(nodeMap.find(parent) == nodeMap.end())
        {
            // Create new parent if not already present
            TreeNode *newnode = new TreeNode(parent);
            nodeMap[parent] = newnode;
        }
        parentNode = nodeMap[parent];

        if(nodeMap.find(child) == nodeMap.end())
        {
            // Create new child if not already present
            TreeNode *newnode = new TreeNode(child);
            nodeMap[child] = newnode;
        }
        childNode = nodeMap[child];

        if(isLeft)
            parentNode -> left = childNode;
        else
            parentNode -> right = childNode;

        if(parentCountMap.find(parentNode -> val) == parentCountMap.end())
            parentCountMap[parentNode -> val] = 0;

        if(parentNode -> left != NULL)
            parentCountMap[parentNode -> left -> val]++ ;
        if(parentNode -> right != NULL)
            parentCountMap[parentNode -> right -> val]++;
    }    

    // Find node which has 0 parent
    for(auto iter = parentCountMap.begin() ; iter != parentCountMap.end() ; iter++)
    {
        if(iter -> second == 0)
            return nodeMap[iter -> first];
    }
    return NULL;
}
