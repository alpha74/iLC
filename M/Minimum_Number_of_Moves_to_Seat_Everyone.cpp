// Find min movements required to seat every student
// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
// Aman Kumar

int minMovesToSeat(vector<int>& seats, vector<int>& students) 
{   
    sort( seats.begin(), seats.end() ) ;
    sort( students.begin(), students.end() ) ;

    int ret = 0 ;

    for( int i = 0 ; i < seats.size() ; i++ )
    {
        ret += abs( seats[i] - students[i] ) ;
    }

    return ret ;
}
