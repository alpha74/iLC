// Check if robot returns to origin after a sequence of moves
// https://leetcode.com/problems/robot-return-to-origin/submissions/
// Aman Kumar

bool judgeCircle(string moves) 
{
    int moveX = 0, moveY = 0 ;

    for( int i = 0 ; i < moves.size() ; i++ )
    {
        if( moves[i] == 'R' )
            moveX++ ;
        else if( moves[i] == 'L')
            moveX-- ;

        else if( moves[i] == 'U')
            moveY++ ;
        else if( moves[i] == 'D' )
            moveY-- ;
    }

    if( moveX == 0 && moveY == 0 )
        return true ;
    return false ;
}
