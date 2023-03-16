// Given two trees, check if they are same is flipping subtrees is allowed
// https://leetcode.com/problems/flip-equivalent-binary-trees/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 12.4 MB Beats 6.32%
bool flipEquiv(TreeNode *root1, TreeNode *root2)
{
    // If both are NULL
    if(root1 == NULL && root2 == NULL)
        return true ;

    // If one is NULL
    if((root1 == NULL && root2 != NULL ) || (root1 != NULL && root2 == NULL))
        return false ;

    if(root1 -> val != root2 -> val)
        return false ;

    bool matched = flipEquiv(root1 -> left, root2 -> left) &&
                             flipEquiv(root1 -> right, root2 -> right) ;

    // If not matching, try flipping                                
    if(!matched)
        matched = flipEquiv(root1 -> left, root2 -> right) && 
                    flipEquiv(root1 -> right, root2 -> left) ;

    return matched ; 
}
