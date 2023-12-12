// Count distinct numbers of board after given operation
// https://leetcode.com/problems/count-distinct-numbers-on-board/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 6.38MB Beats45.37%of users with C++
int distinctIntegers(int n) 
{
    vector<bool> hash(101,0);
    hash[n] = 1;

    for( ; n > 0 ; n--)
    {
        for(int i = n-1 ; i >= 2 ; i--)
        {
            if(n % i == 1)
                hash[i] = 1;
        }
    }    

    int count = 0 ;

    for(int i = 0 ; i < 101 ; i++)
    {
        if(hash[i] == 1)
            count++ ;
    }

    return count ;
}
