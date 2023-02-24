// Return minimum rounds to complete all task when only 2 or 3 similar tasks can be completed in 1 round
// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/
// Aman Kumar

// Runtime 225 ms Beats 94.54%
// Memory 94.8 MB Beats 94.97%
int minimumRounds(vector<int>& tasks) 
{
    sort( tasks.begin(), tasks.end() ) ;
    int ret = 0 ;

    for( int i = 0 ; i < tasks.size() ; i++ )
    {
        int j = i+1 ;

        while( j < tasks.size() && tasks[i] ==  tasks[j] )
            j++ ;

        int p = j-i ;

        // If frequency of any element is 1
        if( p == 1 )
            return -1 ;

        // Use max number of 3
        ret += (p/3) ;

        // If 2 will also be used
        if( p % 3 > 0 )
            ret = ret +1 ;

        i = j-1 ;
    }    

    return ret ;    
/*
[3,3]
*/
}
