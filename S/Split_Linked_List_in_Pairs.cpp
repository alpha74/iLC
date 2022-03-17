// Split linked list in k parts, having size diff <= 1
// https://leetcode.com/problems/split-linked-list-in-parts/
// Aman Kumar

vector<ListNode*> splitListToParts(ListNode* head, int k) 
{
    int len = 0 ;
    ListNode *temp = head ;

    while( temp != NULL )
    {
        len++ ;
        temp = temp -> next ;
    }

    vector<int> splitSize ;

    // Get sizes of each part
    for( int i = 1 ; i <= k ; i++ )
    { 
        splitSize.push_back( len / k ) ;
    }

    len = len % k ;
    for( int i = 0 ; i < splitSize.size() ; i++ )
    {
        if( len > 0 )
        {
            splitSize[i] = splitSize[i] + 1 ;
            len-- ;
        }

    }

    // Separate the linked lists
    vector<ListNode*> ret ;

    for( int i = 0 ; i < splitSize.size() ; i++ )
    {
        int currSize = splitSize[i] ;
        //cout << "\n currSize: " << currSize ;

        if( currSize > 0 )
        {
            temp = head ;

            ListNode *currHead = temp ;

            currSize-- ;

            while( currSize-- && temp != NULL )
            {
                //cout << "\n temp: " << temp -> val << " currSize: " << currSize ;
                temp = temp -> next ;
            }

            if( temp != NULL )
            {
                head = temp -> next ;
                temp -> next = NULL ;
            }
            else
                head = NULL ;

            ret.push_back( currHead ) ;
        }
        else
            ret.push_back( NULL ) ;
    }

    return ret ;
/*
[1,2,3]
5
[1,2,3]
1
[1,2,3]
2
[1,2,3]
3
[1,2,3]
4
[1,2,3,4,5,6,7,8,9,10]
1
[1,2,3,4,5,6,7,8,9,10]
2
[1,2,3,4,5,6,7,8,9,10]
3
[1,2,3,4,5,6,7,8,9,10]
4
[1,2,3,4,5,6,7,8,9,10]
7
[1,2,3,4,5,6,7,8,9,10]
20
[1]
3
[]
1
*/
}
