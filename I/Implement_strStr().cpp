// Implement strStr()
// https://leetcode.com/problems/implement-strstr/
// Aman Kumar

int strStr(string haystack, string needle) 
{
    if( needle.length() == 0 )
        return 0 ;

    if( haystack.length() < needle.length() )
        return -1 ;

    int ret = -1 ;

    for( int i = 0 ; i <= ( haystack.length() - needle.length() ) ; i++ )
    {
        if( haystack[i] == needle[0] )
        {
            int j = 0, k = i ;
            int index = i ;

            while( haystack[k] == needle[j])
            {   
                //cout << "\n k: " << k << " j: " << j ;
                k++ ;
                j++ ;

                if( j == needle.length() )
                    return index ;
            }
        }

    }

    return ret ;
/*
"hll"
"ll"
"aaaaa"
"aa"
"l"
"p"
"l"
"l"
"mississippi"
"issip"
*/
}
