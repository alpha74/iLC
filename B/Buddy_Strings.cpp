// Check if a string can be made to another string by swapping two indices once
// https://leetcode.com/problems/buddy-strings/
// Aman Kumar

// Runtime: 4 ms, faster than 78.04% of C++ online submissions for Buddy Strings.
// Memory Usage: 6.9 MB, less than 66.18% of C++ online submissions for Buddy Strings.
bool buddyStrings(string s, string goal) 
{   
    if( s.length() != goal.length() )
        return false ;

    int index1 = -1, index2 = -1 ;
    unordered_set<char> set_s ;

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
        set_s.insert( s[i] ) ;
    }

    // Two mismatches found, then elements should be same
    if( index1 != -1 && index2 != -1 )
        return s[index1] == goal[index2] && s[index2] == goal[index1];

    // Only one mismatch found
    if( index1 != -1 )
        return false ;

    // If no duplicates, then cannot swap
    return set_s.size() < s.length() ;
/*
"abcd"
"badc"

"a"
"a"

"a"
"b"

"aabssdf"
"aassbdf"

*/
}
