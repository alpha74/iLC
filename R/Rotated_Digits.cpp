// Count number of GOOD numbers. See the rules.
// https://leetcode.com/problems/rotated-digits/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotated Digits.
// Memory Usage: 5.9 MB, less than 86.98% of C++ online submissions for Rotated Digits.
int rotatedDigits(int n) 
{
    int count = 0 ;

    for( int i = 1 ; i <= n ; i++ )
    {
        bool valid = true ;
        bool changed = false ;

        int num = i ;

        while( num > 0 && valid)
        {
            int rem = num % 10 ;

            // Check if any invalid digit will occur.
            if( rem == 3 || rem == 4 || rem == 7 )
                valid = false ;

            // Check if digit change will occur
            if( rem == 2 || rem == 5 || rem == 6 || rem == 9 )
                changed = true ;

            num = num / 10 ;
        }

        if( valid && changed )
            count++ ;
    }

    return count ;
}
