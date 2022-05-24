// Return three sorted consecutive numbers whose sum is NUM
// https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/
// Aman Kumar

vector<long long> sumOfThree(long long num) 
{
    vector<long long int> ret(3,0) ;

    if( num == 0 )
    {
        ret[0] = -1 ;
        ret[1] = 0 ;
        ret[2] = 1 ;

        return ret ;
    }

    long long int i = 0, j = num/3 ;

    while( i <= j )
    {
        long long int mid = (i+j)/2 ;

        if( mid-2 >= 0 && 3 * mid -3 == num )
        {
            ret[0] = mid -2 ;
            ret[1] = mid -1 ;
            ret[2] = mid ;

            return ret ;
        }
        else if( mid-1 >= 0 && 3 * mid == num )
        {
            ret[0] = mid-1 ;
            ret[1] = mid ;
            ret[2] = mid+1 ;

            return ret ;
        }
        else if( 3*mid + 3 == num )
        {
            ret[0] = mid ;
            ret[1] = mid +1 ;
            ret[2] = mid +2 ;

            return ret ;
        }

        else if( 3*mid + 3 > num )
            j = mid -1 ;
        else
            i = mid +1 ;
    }

    // Case when solution not exists
    ret.clear() ;

    return ret ;
/*
33
4
1
2
3
4
20000000
90000000
10000000000
1000000000000
0
*/
}
