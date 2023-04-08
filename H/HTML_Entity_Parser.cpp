// Given text, parse HTML entity codes to their original characters
// https://leetcode.com/problems/html-entity-parser/description/
// Aman Kumar

// Runtime 61 ms Beats 75.44%
// Memory 18.8 MB Beats 83.33%
class Rep
{
    public:
        string c ;
        int jump ;

        Rep()
        {
            c = "" ;
            jump = -1 ;
        }

        Rep(string s, int j)
        {
            c = s ;
            jump = j ;
        }
};

class Solution {
public:
    Rep findRep(string &text, int i)
    {
        int n = text.length() ;
        
        // quot;
        if(i+4 < n && text[i] == 'q' && text[i+1] == 'u' && text[i+2] == 'o' && text[i+3] == 't' && text[i+4] == ';')
            return Rep("\"", 5);

        // apos;
        if(i+4 < n && text[i] == 'a' && text[i+1] == 'p' && text[i+2] == 'o' && text[i+3] == 's' && text[i+4] == ';')
            return Rep("'", 5) ;
        
        // amp;
        if(i+3 < n && text[i] == 'a' && text[i+1] == 'm' && text[i+2] == 'p' && text[i+3] == ';')
            return Rep("&", 4);
        
        // gt;
        if(i+2 < n && text[i] == 'g' && text[i+1] == 't' && text[i+2] == ';')
            return Rep(">", 3) ;
        
        // lt;
        if(i+2 < n && text[i] == 'l' && text[i+1] == 't' && text[i+2] == ';')
            return Rep("<", 3) ;
        
        // frasl;
        if(i+5 < n && text[i] == 'f' && text[i+1] == 'r' && text[i+2] == 'a' && text[i+3] == 's' && text[i+4] == 'l' && text[i+5] == ';')
            return Rep("/", 6);
        
        return Rep("", -1) ;
    }

    string entityParser(string text) 
    {
        string ret = "" ;

        for(int i = 0 ; i < text.length() ; )
        {
            Rep rep ;

            if(text[i] == '&')
            {
                rep = findRep(text, i+1) ;
            }

            if(rep.jump == -1)
            {
                ret += text[i] ;
                i++ ;
            }
            else
            {
                ret += rep.c ;
                i += (rep.jump +1) ;
            }
        }

        return ret ;    
    }
};
