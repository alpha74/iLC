// Return true or false if given array can be made from original array using push or pop stack operations
// https://leetcode.com/problems/validate-stack-sequences/submissions/
// Aman Kumar

// Runtime 4 ms Beats 90.45%
// Memory 15.5 MB Beats 24.28%
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
{
    stack<int> stk ;

    int j = 0 ;

    for(int i = 0 ; i < pushed.size() ; i++ )    
    {
        stk.push( pushed[i] ) ;

        while(!stk.empty() && stk.top() == popped[j])
        {
            stk.pop() ;
            j++ ;
        }
    }

    return stk.empty() ;
}
