// Return maximum width of binary tree
// https://leetcode.com/problems/maximum-width-of-binary-tree/description/
// Aman Kumar

// Runtime 4 ms Beats 95.90%
// Memory 17.3 MB Beats 64.67%
long long getLeftIndex(int n)
{
    long long ret = n ;
    return ret * 2 -1 ;
}

long long getRightIndex(int n)
{
    long long ret = n ;
    return ret * 2 ;
}

int widthOfBinaryTree(TreeNode* root) 
{
    if( root == NULL )
        return 0 ;

    if( root -> left == NULL && root -> right == NULL)
        return 1 ;

    long long int maxw = 0 ;
    queue<pair<TreeNode*,long long>> q ;

    q.push( { root, 1 } ) ;

    while( !q.empty() )
    {
        int qlen = q.size() ;

        if( qlen == 1 )
        {
            TreeNode *currNode = q.front().first ;
            int currIndex = q.front().second ;

            q.pop() ;

            if( maxw < 1 )
                maxw = 1 ;

            // Push children
            if( currNode -> left != NULL)
                q.push( { currNode -> left, getLeftIndex( currIndex ) }) ;

            if( currNode -> right != NULL)
                q.push( { currNode -> right, getRightIndex( currIndex ) }) ;
        }
        else
        {
            int i = 0 ;

            // Take first value from queue
            TreeNode *currNode = q.front().first ;
            long long int currIndex = q.front().second ;
            i++ ;

            q.pop() ;

            long long int lastIndex = currIndex ;

            // Push children
            if( currNode -> left != NULL)
                q.push( { currNode -> left, getLeftIndex( currIndex ) }) ;

            if( currNode -> right != NULL)
                q.push( { currNode -> right, getRightIndex( currIndex ) }) ;

            while(i < qlen)
            {
                currNode = q.front().first ;
                lastIndex = q.front().second ;
                q.pop() ;

                // Push children
                if( currNode -> left != NULL)
                    q.push( { currNode -> left, getLeftIndex( lastIndex ) }) ;

                if( currNode -> right != NULL)
                    q.push( { currNode -> right, getRightIndex( lastIndex) }) ;

                i++ ;
            }

            // Calculate max
            if((lastIndex - currIndex + 1) > maxw )
                maxw = lastIndex - currIndex + 1 ;
        }
    }

    return maxw ;
}
