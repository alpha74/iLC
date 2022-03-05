// Reformat given date string to YYYY-MM-DD
// https://leetcode.com/problems/reformat-date/
// Aman Kumar

vector<string> splitStr( string &date, int c)
{
    vector<string> ret ;
    string curr = "" ;

    for( int i = 0 ; i < date.length() ; i++ )
    {
        if( date[i] == c )
        {
            ret.push_back( curr ) ;
            curr = "" ;
        }
        else
            curr += date[i] ;
    }
    ret.push_back( curr ) ;

    return ret ;
}

string reformatDate(string date) 
{
    // Initialize months
    unordered_map<string,string> month ;

    month[ "Jan" ] = "01" ;
    month[ "Feb" ] = "02" ;
    month[ "Mar" ] = "03" ;
    month[ "Apr" ] = "04" ;
    month[ "May" ] = "05" ;
    month[ "Jun" ] = "06" ;
    month[ "Jul" ] = "07" ;
    month[ "Aug" ] = "08" ;
    month[ "Sep" ] = "09" ;
    month[ "Oct" ] = "10" ;
    month[ "Nov" ] = "11" ;
    month[ "Dec" ] = "12" ;

    // End 

    vector<string> sDate ;

    sDate = splitStr(date, ' ' ) ;

    string dateNum = "" ;

    // Extract date number
    for( int i = 0 ; i < sDate[0].length() ; i++ )
    {
        if( sDate[0][i] >= '0' && sDate[0][i] <= '9' )
            dateNum += sDate[0][i] ;
        else
            break ;
    }
    if( dateNum.length() == 1 )
        dateNum = "0" + dateNum ;

    return sDate[2] + "-" + month[ sDate[1] ] + "-" + dateNum ;
}
