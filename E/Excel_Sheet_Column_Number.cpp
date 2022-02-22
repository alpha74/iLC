// Given excel sheet column title, return number of col
// https://leetcode.com/problems/excel-sheet-column-number/
// Aman Kumar

int titleToNumber(string columnTitle) 
{
    int ret = 0 ;

    for( int i = 0 ; i < columnTitle.length() ; i++ )
    {
        ret = ret * 26 + ( columnTitle[i] - 64 ) ;
    }
    return ret ;
}
