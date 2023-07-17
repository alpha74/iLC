// Given two strings, return lexicopgraphically largest string which can be generated using their characters
// https://leetcode.com/problems/largest-merge-of-two-strings/description/
// Aman Kumar

// Runtime 67 ms Beats 66.54%
// Memory 163.9 MB Beats 64.34%
string largestMerge(string word1, string word2) 
{
    int len1 = word1.length(), len2 = word2.length() ;
    int i = 0, j = 0 ;

    string ret = "" ;

    while(i < len1 && j < len2)
    {
        if(word1[i] > word2[j])
        {
            ret += word1[i] ;
            i++ ;
        }
        else if(word2[j] > word1[i])
        {
            ret += word2[j] ;
            j++ ;
        }
        else
        {
            string temp1 = word1.substr(i+1) ;
            string temp2 = word2.substr(j+1) ;

            // Check which one will be larger in future iterations
            if(temp1 > temp2)
            {
                ret += word1[i] ;
                i++ ;
            }
            else
            {
                ret += word2[j] ;
                j++ ;
            }
        }
    }

    while(i < len1)
        ret += word1[i++] ;
    
    while(j < len2)
        ret += word2[j++] ;

    return ret ;    
}
