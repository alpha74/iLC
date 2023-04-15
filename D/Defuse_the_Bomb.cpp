// Return defuse array based on value of k
// https://leetcode.com/problems/defuse-the-bomb/description/
// Aman Kumar

// Runtime 4 ms Beats 50.76%
// Memory 8.3 MB Beats 78.17%
vector<int> decrypt(vector<int>& code, int k) 
{
    int n = code.size() ;
    vector<int> ret(n,0) ;

    if(k == 0)
        return ret ;

    else if(k < 0)
    {
        for(int i = 0 ; i < n ; i++)
        {
            int temp = -k ;
            int j = i-1 ;

            while(temp--)
            {
                if(j < 0)
                    j = n-1 ;

                ret[i] += code[j] ;
                j-- ;
            }
        }
    }   
    else
    {
        for(int i = 0 ; i < n ; i++)
        {
            int temp = k ;
            int j = i+1 ;

            while(temp--)
            {
                if(j >= n)
                    j = 0 ;

                ret[i] += code[j] ;
                j++ ;
            }
        }
    }   

    return ret ;  
}
