// Given a perfect BT, populate the 'next' pointer of each node II
// https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/
// Aman Kumar

Node* connect(Node* root) 
{
    if( root == NULL || (root -> left == NULL && root -> right ==  NULL))
        return root ;

    queue<Node*> q1, q2 ;

    q1.push( root ) ;

    while( !q1.empty() || !q2.empty() )
    {
        if( !q1.empty() )
        {
            Node *curr = q1.front() ;
            q1.pop() ;

            if( curr -> left != NULL )
                q2.push( curr -> left ) ;
            if( curr -> right != NULL )
                q2.push( curr -> right ) ;

            Node *prev = curr ;

            while( !q1.empty() )
            {
                curr = q1.front() ;
                q1.pop() ;
                if( curr -> left != NULL )
                    q2.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q2.push( curr -> right ) ;

                prev -> next = curr ;
                prev = curr ;
            }
        }
        else if( !q2.empty() )
        {
            Node *curr = q2.front() ;
            q2.pop() ;

            if( curr -> left != NULL )
                q1.push( curr -> left ) ;
            if( curr -> right != NULL )
                q1.push( curr -> right ) ;

            Node *prev = curr ;

            while( !q2.empty() )
            {
                curr = q2.front() ;
                q2.pop() ;
                if( curr -> left != NULL )
                    q1.push( curr -> left ) ;
                if( curr -> right != NULL )
                    q1.push( curr -> right ) ;

                prev -> next = curr ;
                prev = curr ;
            }
        }
    }
    return root ;   
}
