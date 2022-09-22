// Check if student is eligible for attendance reward
// https://leetcode.com/problems/student-attendance-record-i/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Student Attendance Record I.
// Memory Usage: 6.3 MB, less than 49.36% of C++ online submissions for Student Attendance Record I.
bool checkRecord(string s) 
{
    int countA = 0 ;
    int countL = 0 ;
    bool ret = true ;

    if( s[0] == 'L')
        countL++ ;
    if( s[0] == 'A')
        countA++ ;

    for( int i = 1 ; i < s.length() && ret ; i++ )
    {
        if( s[i] == 'L')
        {
            if( s[i-1] == 'L')
                countL++ ;
            else
                countL = 1 ;
        }

        if( countL >= 3 )
            ret = false ;

        if( s[i] == 'A')
            countA++ ;
    }

    if( countA >= 2 || countL >= 3)
        ret = false ;

    return ret ;
/*
"AAAA"
"AA"
*/
}
