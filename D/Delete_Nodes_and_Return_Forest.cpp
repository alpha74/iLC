// Delete given nodes of a binary tree and return left over forest nodes
// https://leetcode.com/problems/delete-nodes-and-return-forest/
// Aman Kumar

// Runtime 10ms Beats 92.71%
// Memory 27.37MB Beats 49.65%
TreeNode* traverse(TreeNode *root, unordered_map<int,bool> &del, vector<TreeNode*> &ret)
{
    if(root == NULL) return NULL;

    root -> left = traverse(root -> left, del, ret);
    root -> right = traverse(root -> right, del, ret);

    // root is not to be deleted
    if(del.find(root -> val) == del.end())
        return root;

    // root is to be deleted, Push its child nodes
    if(root -> left != NULL)  ret.push_back(root -> left);
    if(root -> right != NULL) ret.push_back(root -> right);

    delete root ;
    return NULL;
}

vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) 
{
    unordered_map<int,bool> del;
    vector<TreeNode*> ret;

    for(int i = 0 ; i < to_delete.size() ; i++)
        del[to_delete[i]] = true;

    int rootVal = root -> val;
    traverse(root, del, ret);

    // If root is not to be deleted, push root to result
    if(del.find(rootVal) == del.end())
        ret.push_back(root);

    return ret;
}
