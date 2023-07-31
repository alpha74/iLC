// Return sum of numbers in range 1 to n which are divisible by 4, 5 or 7
// https://leetcode.com/problems/sum-multiples/description/?envType=list&envId=9y1tu63i
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 88.62%
int sumOfMultiples(int n) 
{
    int ret = 0 ;

    for(int i = 1 ; i <= n ; i++)
    {
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            ret += i ;
    }

    return ret ;    
}
