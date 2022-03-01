// Check if a string can be made using letters of another string
// https://leetcode.com/problems/ransom-note/
// Aman Kumar

bool canConstruct(string ransomNote, string magazine) 
{
    int r[27] = { 0 } ;
    int m[27] = { 0 } ;

    for( int i = 0 ; i < ransomNote.length() ; i++ )
    {
        r[ ransomNote[i] - 'a' ]++ ;
    }

    for( int i = 0 ; i < magazine.length() ; i++ )
    {
        m[ magazine[i] - 'a' ]++ ;
    }

    bool ret = true ;

    for( int i = 0 ; i < ransomNote.length() && ret ; i++ )
    {
        if( r[ ransomNote[i] -'a'] > m[ ransomNote[i] -'a' ] )
            ret = false ;
    } 
/*
"bg"
"efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"
*/

    return ret; 
}
