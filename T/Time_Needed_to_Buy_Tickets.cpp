// Time needed for person at index k to buy tickets
// https://leetcode.com/problems/time-needed-to-buy-tickets/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 9.30MB Beats91.31%of users with C++
int timeRequiredToBuy(vector<int>& tickets, int k) 
{
    int ret = 0;

    for(int i = 0 ; i < tickets.size() ; i++)
    {
        // We take min to get min re-queues
        if(i <= k)
            ret += min(tickets[i], tickets[k]);
        
        // Number of seconds will be 1 less
        else
            ret += min(tickets[i], tickets[k] -1);
    }

    return ret;    
}
