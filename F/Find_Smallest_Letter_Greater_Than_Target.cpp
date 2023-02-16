// Find letter greater than given target letter
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/
// Aman Kumar

// Runtime 12 ms Beats 88.61%
// Memory 16 MB Beats 5.28%
char nextGreatestLetter(vector<char>& letters, char target) 
{
    for( int i = 0 ; i < letters.size() ; i++ )
    {
        if( letters[i] > target )
            return letters[i] ;
    }
    return letters[0];
}
