// Return largest number formed using elements in array
// https://leetcode.com/problems/largest-number/
// Aman Kumar

static bool compStr(string a, string b)
{
    return (a+b) > (b+a) ;
}

string largestNumber(vector<int>& nums) 
{
    vector<string> snum ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        snum.push_back( to_string(nums[i] ) ) ;
    }

    sort( snum.begin(), snum.end(), compStr ) ;

    string ret = "" ;

    for( int i = 0 ; i < snum.size() ; i++ )
    {
        ret += snum[i] ;
    }

    if( ret[0] == '0' )
        return "0" ;

    return ret ;
}
