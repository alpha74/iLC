// Baseball game
// https://leetcode.com/problems/baseball-game/
// Aman Kumar

int calPoints(vector<string>& ops) 
{
    stack<int> rec ;

    for( int i = 0 ; i < ops.size() ; i++ )
    {
        if( ops[i] == "+" )
        {
            int temp1 = rec.top() ;
            rec.pop() ;
            int temp2 = rec.top() ;
            rec.pop() ;

            rec.push( temp2 ) ;
            rec.push( temp1 ) ;
            rec.push( temp1+ temp2 ) ;
        }
        else if( ops[i] == "D" )
        {
            int temp1 = rec.top() ;
            rec.pop() ;

            rec.push( temp1 ) ;
            rec.push( temp1 * 2) ;
        }
        else if( ops[i] == "C" )
        {
            rec.pop() ;
        }
        else
        {
            rec.push( stoi(ops[i] ) ) ;
        }
    }

    int total = 0 ;

    while( !rec.empty() )
    {
        total += rec.top() ;
        rec.pop() ;
    }
    return total ;
}
