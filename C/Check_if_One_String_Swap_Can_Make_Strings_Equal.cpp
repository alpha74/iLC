// Check if one character swap can make two strings equal
// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if One String Swap Can Make Strings Equal.
// Memory Usage: 6.2 MB, less than 86.22% of C++ online submissions for Check if One String Swap Can Make Strings Equal.
bool areAlmostEqual(string s, string goal) 
{   
    if( s.length() != goal.length() )
        return false ;

    if( s == goal )
        return true ;

    int index1 = -1, index2 = -1 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] != goal[i] )
        {
            if( index1 == -1 )
                index1 = i ;
            else if( index2 == -1 )
                index2 = i ;

            // More than 2 mismatches
            else
                return false ;
        }
    }

    // Two mismatches found, then elements should be same
    if( index1 != -1 && index2 != -1 )
        return s[index1] == goal[index2] && s[index2] == goal[index1];

    // Only one mismatch found
    if( index1 != -1 )
        return false ;

    return true ;
}
