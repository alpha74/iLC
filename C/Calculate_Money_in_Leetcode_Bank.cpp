// Calculate money in according to rules in given days
// https://leetcode.com/problems/calculate-money-in-leetcode-bank/description
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 6.30MB Beats71.05%of users with C++
int totalMoney(int n) 
{
    int total = 0 ;
    int iter = 0 ;

    while(n > 0)
    {
        int rem = 0 ;
        if(n < 7)
            rem = n + iter ;
        else
            rem = 7 + iter;

        total += ((rem * (rem + 1)) / 2);
        total -= ((iter * (iter+1)) / 2);

        cout << "\n total: " << total ;

        iter++ ;
        n -= 7 ;
    }  

    return total ;  
}
