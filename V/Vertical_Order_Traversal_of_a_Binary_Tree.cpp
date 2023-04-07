// Vertical order traversal of binary tree
// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 14.5 MB Beats 13.63%
void traverse(TreeNode *root, int d, int h, map<int,map<int,vector<int>>> &hash)
{
    if(root == NULL)
        return ;

    hash[d][h].push_back( root -> val ) ;

    traverse(root -> left, d-1, h+1, hash) ;
    traverse(root -> right, d+1, h+1, hash) ;
}

vector<vector<int>> verticalTraversal(TreeNode* root) 
{
    map<int,map<int,vector<int>>> hash ; // direction -> { level -> [list] }

    hash[0][0].push_back( root -> val ) ;

    traverse(root -> left, -1, 1, hash) ;
    traverse(root -> right, +1, 1, hash) ;

    vector<vector<int>> ret(hash.size()) ;

    int i = 0 ;
    for(auto it = hash.begin() ; it != hash.end() ; it++ )
    {
        map<int,vector<int>> hash2 = it -> second ;

        for(auto it2 = hash2.begin() ; it2 != hash2.end() ; it2++ )
        {
            sort((it2 -> second).begin(), (it2->second).end()) ;
            ret[i].insert(ret[i].end(), (it2->second).begin(), (it2->second).end() ) ;
        }
        i++ ;
    }

    return ret ;
}
