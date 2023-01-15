// Remove given digit from number at various places to form maximize number
// https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.4 MB Beats 5.49%
string removeDigit(string number, char digit) 
{
    string ret = "" ;

    vector<int> index ;

    for( int i = 0 ; i < number.length() ; i++ )
    {
        if( number[i] == digit )
        {
            index.push_back(i) ;
        }
    }

    for( int i = 0 ; i < index.size() ; i++ )
    {
        string newNum = "" ;
        newNum += number.substr(0,index[i]) ;

        if(index[i]+1 < number.length() )
            newNum += number.substr(index[i]+1, number.length() - index[i]-1);

        if( newNum > ret )
        {
            ret = newNum ;
        }
    }

    return ret ;    
/* 
"133235"
"2998589353917872714814599237991174513476623756395992135212546127959342974628712329595771672911914471"
*/
}
