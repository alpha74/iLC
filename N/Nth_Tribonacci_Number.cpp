// Return nth tribonacci number
// https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=list&envId=9y1tu63i
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 68.28%
int find_num(int n, vector<int> &hash)
{
    if(n <= 0)
        return 0;

    if(hash[n] != 0)
        return hash[n];

    int val = find_num(n-3, hash) + find_num(n-2, hash) + find_num(n-1, hash);
    hash[n] = val;

    //cout << "\n hash:" << n << " : " << hash[n];
    return val;
}

int tribonacci(int n) 
{
    vector<int> hash(38, 0);
    hash[0] = 0;
    hash[1] = 1;
    hash[2] = 1;

    return find_num(n, hash);    
}
