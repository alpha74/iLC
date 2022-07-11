// Max number of balls in a box
// https://leetcode.com/problems/maximum-number-of-balls-in-a-box/
// Aman Kumar

int digitSum( int n)
{
    int sum = 0 ;

    while( n > 0 )
    {
        sum += ( n % 10 ) ;
        n /= 10 ;
    }
    return sum ;
}

int countBalls(int lowLimit, int highLimit) 
{
    unordered_map<int,int> hash ;

    for( ; lowLimit <= highLimit ; lowLimit++ )
    {
        hash[ digitSum( lowLimit ) ]++ ;
    }

    int maxv = 0 ;

    for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        maxv = max( maxv, iter -> second ) ;
    }

    return maxv ;
}
