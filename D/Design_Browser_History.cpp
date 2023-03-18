// Design browser history
// https://leetcode.com/problems/design-browser-history/description/
// Aman Kumar

// Runtime 136 ms Beats 83.63%
// Memory 61.3 MB Beats 27.17%
class DLL 
{
    public:
        string val ;
        DLL *next ;
        DLL *prev ;

        DLL(string v)
        {
            val = v ;
            next = NULL ;
            prev = NULL ;
        }
} ;

class BrowserHistory {
public:
    DLL *curr ;

    BrowserHistory(string homepage) 
    {
        curr = new DLL(homepage) ;
    }
    
    void visit(string url) 
    {
        // If we are in middle of history, remove all forward nodes
        if(curr -> next != NULL)
        {
            DLL *temp = curr -> next ;
            curr -> next = NULL ;

            while(temp != NULL)
            {
                DLL *del = temp ;
                temp = temp -> next ;
                delete del ;
            }
        }    

        // Add new node
        DLL *newNode = new DLL(url) ;
        curr -> next = newNode ;
        newNode -> prev = curr ;
        curr = curr -> next ;
    }
    
    string back(int steps) 
    {
        while(curr -> prev != NULL && steps--)
            curr = curr -> prev ;
        
        return curr -> val ;
    }
    
    string forward(int steps) 
    {
        while(curr -> next != NULL && steps--)
            curr = curr -> next ;
        
        return curr -> val ;    
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
