// Implement min stack
// https://leetcode.com/problems/min-stack/
// Aman Kumar

class MinStack {
public:
    stack<pair<int,int>> stk ;
    
    MinStack() {
        while( !stk.empty() )
            stk.pop() ;
    }
    
    void push(int val) {
        if( stk.empty() )
            stk.push( { val, val } ) ;
        
        else
        {
            int topEle = stk.top().second ;
            
            stk.push( { val, min( val, topEle )}) ;
        }
    }
    
    void pop() {
        if( !stk.empty() )
            stk.pop() ;
    }
    
    int top() {
        int ret = -1 ;
        
        if( !stk.empty() )
            ret = stk.top().first ;
        
        return ret ;
    }
    
    int getMin() {
        int ret = -1 ;
        
        if( !stk.empty() )
            ret = stk.top().second ;
        
        return ret ;
    }
};
