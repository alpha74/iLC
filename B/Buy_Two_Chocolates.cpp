// Buy two chocolates and return left over money
// https://leetcode.com/problems/buy-two-chocolates/description/
// Aman Kumar

// Runtime 11ms Beats73.75%of users with C++
// Memory 47.02MB Beats29.77%of users with C++
int buyChoco(vector<int>& prices, int money) 
{
    sort(prices.begin(), prices.end());
    int sum = prices[0] + prices[1] ;

    if(sum <= money)
        return money - sum ;
    return money;    
}
