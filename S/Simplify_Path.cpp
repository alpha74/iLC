// Given Unix file path, return its canonical path
// https://leetcode.com/problems/simplify-path/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 10.7 MB Beats 31.86 
int filter(string &s)
{
    if(s == ".")
        return 0 ;

    else if(s == "..")
        return -1 ;

    else
        return 1 ;
}

string simplifyPath(string path) 
{
    stack<string> stk ;

    string word = "" ;

    for(int i = 0 ; i < path.length() ; i++)
    {
        if(path[i] == '/')
        {
            if(word.length() > 0)
            {
                int f = filter(word) ;

                if(f == 1)
                    stk.push(word) ;
                if(f == -1 && !stk.empty())
                    stk.pop() ;
            }

            word = "" ;

            while(i < path.length() && path[i] == '/')
                i++ ;
            i-- ;
        }
        else
            word += path[i] ;
    }

    if(word.length() > 0)
    {
         int f = filter(word) ;

        if(f == 1)
            stk.push(word) ;
        if(f == -1 && !stk.empty())
            stk.pop() ;
    }

    string ret = "" ;

    while(!stk.empty())
    {
        ret = "/" + stk.top() + ret ;
        stk.pop() ;
    }

    if(ret.length() == 0)
        return "/" ;

    return ret ;
/*
"/home//////asd/../12_"
"/a//b////c/d//././/.."
*/
}
