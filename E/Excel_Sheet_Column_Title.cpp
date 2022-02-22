// Given column number, return excel column title
// https://leetcode.com/problems/excel-sheet-column-title/
// Aman Kumar

string convertToTitle(int columnNum) 
{
    string ret = "" ;
    stack<char> stk ;

    int m = 0 ;

    while( columnNum > 0 )
    {
        m = (columnNum) % 26 ;

        if( m == 0 )
        {
            stk.push('Z') ;
            columnNum = columnNum / 26 ;
            columnNum-- ;
        }
        else
        {
            stk.push('A'+ m-1) ;
            columnNum = columnNum / 26 ;
        }
    }

    while( !stk.empty() )
    {
        ret += stk.top() ;
        stk.pop() ;
    }

    return ret ;
/*
52
1
28
701
12
24
26
27
23
*/
}
