// Delete nodes from linked list given in another array and return new head
// https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/
// Aman Kumar

// Runtime 424ms Beats 77.73%
// Memory 262.76MB Beats 44.86%
ListNode* modifiedList(vector<int>& nums, ListNode* head) 
{
    unordered_map<int,bool> rem;

    for(int i = 0 ; i < nums.size() ; i++)
        rem[nums[i]] = 1;

    ListNode *newhead = head;

    // Check if head is to be removed
    while(head != NULL && rem[head -> val] == true)
    {
        ListNode *del = head;
        head = head -> next;
        delete del;

        newhead = head;
    }

    ListNode *temp = head;

    while(temp -> next != NULL)
    {
        // If next node is to be deleted
        if(rem[temp -> next -> val] == true)
        {
            ListNode *del = temp -> next;
            temp -> next = temp -> next -> next;

            delete del;
        }
        else
            temp = temp -> next;
    }

    return newhead;
}
