// Shells in a range in an excel sheet
// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/description/
// Aman Kumar

// Runtime 3 ms Beats 73.94%
// Memory 7.9 MB Beats 21.74%
vector<string> cellsInRange(string s) 
{
    char firstc = s[0] ;
    char firstn = s[1] ;

    char secondc = s[3] ;
    char secondn = s[4] ;

    vector<string> ret ;

    for( ; firstc <= secondc ; firstc++ )
    {
        for( char i = firstn ; i <= secondn ; i++ )
        {
            string temp = "" ;
            temp += firstc ;
            temp += i ;

            ret.push_back( temp ) ;
        }
    }

    return ret ;    
}
