// Check if a given number is Happy number
// https://leetcode.com/problems/happy-number/
// Aman Kumar

long long int getSumDigits( int n )
{
    long long int sum = 0 ;

    while( n > 0 )
    {
        sum = sum + (n%10) * (n%10) ;
        n = n / 10 ;
    }
    return sum ;
}

bool isHappy(int n) 
{
    bool ret = false ;

    // Using concept of slow and fast pointers
    long long int slow = n, fast = n ;
    bool flag = true ;

    fast = getSumDigits( n ) ;

    if( fast == 1 )
        ret = true ;

    fast = getSumDigits( n ) ;

    while( flag == true && ret == false )
    {
        if( fast == 1 || slow == 1 )
        {
            ret = true ;
        }
        else if( fast == slow )
        {
            flag = false ;
            ret = false ;
        }
        else
        {
            slow = getSumDigits( slow ) ;
            fast = getSumDigits( fast ) ;

            if( fast == 1 || slow == 1 )
            {
                ret = true ;
                flag = false ;
            }

            fast = getSumDigits( fast ) ;
        }
    }

    return ret ;
/*
10
19
2
28
37
46
55
*/
}
