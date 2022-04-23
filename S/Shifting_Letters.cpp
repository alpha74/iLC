// Shift letters according to given array and warp around.
// https://leetcode.com/problems/shifting-letters/
// Aman Kumar

string shiftingLetters(string s, vector<int>& shifts) 
{
    for( int i = shifts.size() -2 ; i >= 0 ; i-- )
    {
        shifts[i] += ( shifts[i+1] % 26 );
    }

    for( int i = 0 ; i < s.length() ; i++ )
    {
        unsigned int rot = shifts[i] ;
        rot = rot % 26 ;

        char newChar = s[i] + rot ;

        if( newChar >= 'a' && newChar <= 'z')
            s[i] = newChar ;
        else
            s[i] = newChar - 26 ;
    }

    return s ;
/*
"mkgfzkkuxownxvfvxasy"
[505870226,437526072,266740649,224336793,532917782,311122363,567754492,595798950,81520022,684110326,137742843,275267355,856903962,148291585,919054234,467541837,622939912,116899933,983296461,536563513]
*/
}
