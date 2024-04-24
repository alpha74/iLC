// Return max prime number in diagonals of given 2 matrix
// https://leetcode.com/problems/prime-in-diagonal/description/
// Aman Kumar

// Runtime 81ms Beats88.10%of users with C++
// Memory 38.26MB Beats39.22%of users with C++
bool isPrime(int n)
{
    if(n == 1) return 0;
    for(int i = 2 ; i * i <= n ; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int diagonalPrime(vector<vector<int>>& nums) 
{
    int n = nums.size();
    int m = nums[0].size();
    int maxPrime = 0;
    vector<int> primes;

    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(i == j && isPrime(nums[i][j]))
                maxPrime = max(maxPrime, nums[i][j]);

            if(j == n-i-1 && isPrime(nums[i][j]))
                maxPrime = max(maxPrime, nums[i][j]);
        }
    }  

    return maxPrime; 
}
