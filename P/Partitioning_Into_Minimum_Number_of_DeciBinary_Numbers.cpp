// Return min number of deci-binary numbers needed to get sum as n
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/
// Aman Kumar

// Runtime 25 ms Beats 94.29%
// Memory 13.7 MB Beats 19.67%
int minPartitions(string n) 
{
    int maxd = 1 ;

    for( int i = 0 ; i < n.length() ; i++ )
    {
        int curr = n[i] - '0' ;

        if( curr > maxd)
            maxd = curr;
    }

    return maxd ;
}
