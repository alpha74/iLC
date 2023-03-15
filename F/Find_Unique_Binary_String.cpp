// Return any binary string which does not exists in array
// https://leetcode.com/problems/find-unique-binary-string/
// Aman Kumar

// Solution 1 =====================
// Runtime 0 ms Beats 100%
// Memory 10.3 MB Beats 56.6%
string addOneBit( string s )
{
    bool carry = 1 ;

    for( int i = s.length() -1 ; carry == 1 && i >= 0 ; i-- )
    {
        if( s[i] == '0' )
        {
            s[i] = '1' ;
            carry = 0 ;
        }
        else
        {
            s[i] = '1' ;
            carry = 1 ;
        }
    }
    return s ;
}

string findDifferentBinaryString(vector<string>& nums) 
{
    unordered_map<string,bool> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ] = true ;
    }

    string patt = "" ;

    int n = nums.size() ;
    while( n-- )
    {
        patt += "0" ;
    }

    string ret = "#" ;

    while( ret == "#" )
    {
        if( hash.find( patt) == hash.end() )
            return patt ;
        else
            patt = addOneBit( patt ) ;
    }
    return patt ;
/*
["000","001","110"]
*/
}


// Solution 2 =====================
string getBinary(int n)
{
    string ret = "" ;

    while(n > 0)
    {
        int rem = n % 2 ;
        ret += to_string( rem ) ;

        n = n/2 ;
    }

    reverse(ret.begin(), ret.end()) ;

    return ret ;
}

int getDecimal(string s)
{
    int ret = 0 ;
    int n = s.length() ;
    for( int i = 0 ; i < n; i++ )
    {
        if( s[n-i-1] == '1')
            ret = ret + pow(2, i);
    }

    return ret ;
}

int getMaxVal(int n)
{
    string s = "" ;

    while(n--)
        s += "1" ;

    return getDecimal(s) ;
}

string findDifferentBinaryString(vector<string>& nums)
{
    int n = nums[0].length() ;
    unordered_map<int,bool> hash ;
    int minVal = 0, maxVal = getMaxVal(n) ;

    // Convert each to decimal
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        int dec = getDecimal( nums[i] ) ;
        hash[ dec ] = 1;
    }

    // 0 to 7
    // Search from minVal to maxVal
    for( int i = minVal ; i <= maxVal ; i++ )
    {
        if(hash[i] == 0)
        {
            string ans = getBinary(i) ; 

            int diff = n - ans.length() ;

            // Append 0s in start
            while(diff--)
                ans = "0" + ans ;


            return ans ;
        }
    }

    return "" ;
}
