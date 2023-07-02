// Return mmin unfairness value by distributing cookies to k children
// https://leetcode.com/problems/fair-distribution-of-cookies/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.8 MB Beats 62.11%
void recur(int index, vector<int> &cookies, vector<int> &sum, int &ret)
{
    int n = cookies.size() ;

    // If all cookies are distributed, check for unfairness value
    if(index == n)
    {
        int maxVal = INT_MIN ;
        
        // Find max of current distribution
        for(int i = 0 ; i < sum.size() ; i++ )
            maxVal = max(maxVal, sum[i]) ;
        
        ret = min(ret, maxVal) ;

        return ;
    }

    // Recur for different combinations
    for(int i = 0 ; i < sum.size() ; i++)
    {
        sum[i] += cookies[index] ;  // Add bag
        recur(index+1, cookies, sum, ret) ;
        sum[i] -= cookies[index] ;  // Remove bag
        
        // Why?
        if(sum[i] == 0)
            break ;
    }
}

int distributeCookies(vector<int>& cookies, int k) 
{
    vector<int> sum(k, 0) ;
    int ret = INT_MAX ;     // Minimize the answer

    recur(0, cookies, sum, ret) ;
    return ret ;  
}
