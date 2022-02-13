// Implement queue using two stacks
// https://leetcode.com/problems/implement-queue-using-stacks/
// Aman Kumar

class MyQueue {
public:
    stack<int> stk ;
    
    MyQueue() 
    {
        ;
    }
    
    void push(int x) 
    {
        stk.push( x ) ;    
    }
    
    int pop() 
    {
        int ret = -1 ;
        int size = stk.size() ;
        
        stack<int> stk2 ;
        size-- ;
        
        while( size-- )
        {
            ret = stk.top() ;
            stk.pop() ;
            
            stk2.push( ret ) ;
        }
        
        ret = stk.top() ;
        stk.pop() ;
        
        while( !stk2.empty() )
        {
            stk.push( stk2.top() ) ;
            stk2.pop() ;
        }
        return ret ;  
    }
    
    int peek() 
    {
        int ret ;
        int size = stk.size() ;
        
        stack<int> stk2 ;
        
        while( size-- )
        {
            ret = stk.top() ;
            stk.pop() ;
            
            stk2.push( ret ) ;
        }
        
        while( !stk2.empty() )
        {
            stk.push( stk2.top() ) ;
            stk2.pop() ;
        }
        return ret ;
    }
    
    bool empty() 
    {
        return stk.empty() ;    
    }
};
