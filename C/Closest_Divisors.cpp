// Return closest divisors of n+1 and n+2, given n.
// https://leetcode.com/problems/closest-divisors/
// Aman Kumar

// Runtime: 22 ms, faster than 25.96% of C++ online submissions for Closest Divisors.
// Memory Usage: 6.1 MB, less than 90.06% of C++ online submissions for Closest Divisors.
vector<int> closestDivisors(int area)
{
    int mid = sqrt(area+2) ;

    vector<int> ret (2);
    int minDiff = INT_MAX ;

    for( int i = 1 ; i <= mid ; i++ )
    {
        int num1 = (area+1) / i ;
        int num2 = (area+2) / i ;

        if( (area+1) / num1 == i && (area+1) % num1 == 0 )
        {
            if( abs(num1-i) < minDiff)
            {
                int currDiff = abs( num1-i) ;

                if( currDiff < minDiff )
                {
                    minDiff = currDiff ;
                    ret[0] = num1 ;
                    ret[1] = i ;
                }
            }
        }
        if( (area+2) / num2 == i && (area+2) % num2 == 0 )
        {
            if( abs(num2-i) < minDiff)
            {
                int currDiff = abs( num2-i) ;

                if( currDiff < minDiff )
                {
                    minDiff = currDiff ;
                    ret[0] = num2 ;
                    ret[1] = i ;
                }
            }
        }

        if( minDiff == 0 )
            break ;
    }

    return ret ;
}
