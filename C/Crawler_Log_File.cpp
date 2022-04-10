// Return minimum path to main dir
// https://leetcode.com/problems/crawler-log-folder/
// Aman Kumar

int minOperations(vector<string>& logs) 
{
    stack<string> stk ;

    for( int i = 0 ; i < logs.size() ; i++ )
    {
        if( logs[i] == "./") ;
        else if( logs[i] == "../")
        {
            if( !stk.empty() )
                stk.pop() ;
        }
        else
        {
            stk.push( logs[i] ) ;
        }
    }

    return stk.size() ;
}
