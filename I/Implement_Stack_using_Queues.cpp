// Implement stack using queues
// https://leetcode.com/problems/implement-stack-using-queues/
// Aman Kumar

class MyStack {
public:
    queue<int> q ;
    
    MyStack() 
    {
        ;
    }
    
    void push(int x) 
    {
        q.push( x ) ;
    }
    
    int pop() 
    {
        if( !q.empty() )
        {
            int size = q.size() ;
            
            size-- ;
            
            while( size-- )
            {
                int temp = q.front() ;
                q.pop() ;
                q.push( temp ) ;
            }
            int ret = q.front() ;
            q.pop() ;
            return ret ;
        }
        return -1 ;
    }
    
    int top() 
    {
        if( !q.empty() )
        {
            int size = q.size() ;
            
            size-- ;
            
            while( size-- )
            {
                int temp = q.front() ;
                q.pop() ;
                q.push( temp ) ;
            }
            int ret = q.front() ;
            q.pop() ;
            q.push( ret ) ;
            return ret ;
        }
        return -1 ;
    }
    
    bool empty() 
    {
        return q.empty() ;    
    }
};
