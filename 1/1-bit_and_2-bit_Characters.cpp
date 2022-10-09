// Check if last character in array is always Char-Type1
// https://leetcode.com/problems/1-bit-and-2-bit-characters/
// Aman Kumar

// Runtime: 3 ms, faster than 93.95% of C++ online submissions for 1-bit and 2-bit Characters.
// Memory Usage: 9.7 MB, less than 13.03% of C++ online submissions for 1-bit and 2-bit Characters
bool isOneBitCharacter(vector<int>& bits) 
{
    int n = bits.size() ;

    if( n == 1 )
        return true ;

    int i = 0 ;
    bool ret = true ;

    for( ; i < n ; )
    {       
        if( bits[i] == 0 )
        {
            i++ ;
            ret = true ;
        }
        else
        {
            i += 2 ;
            ret = false ;
        }
    }

    return ret ;
/*
[0,1,0]
[0]
[1,0]
[0,0]
*/
}
