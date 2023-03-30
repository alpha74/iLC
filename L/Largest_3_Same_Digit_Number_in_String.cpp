// Return largest three same digit number in a string
// https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/
// Aman Kumar

// Runtime 0 ms Beats 100% 
// Memory 6.3 MB Beats 96.30%
string largestGoodInteger(string num) 
{
    string ret = "" ;

    for(int i = 2 ; i < num.length() ; i++ )
    {
        if(num[i] == num[i-1] && num[i-1] == num[i-2] )
        {
            string curr = "" ;
            curr += num[i] ;
            curr += num[i] ;
            curr += num[i] ;

            if(ret.length() == 0 || curr > ret)
                ret = curr ;
        }
    }    

    return ret ;
}
