// Find winner in a tic tac toe game given moves
// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 8.3 MB Beats 74.84%
char getState(vector<vector<char>> &mat)
{
    // Row1
    if(mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2])
        if(mat[0][0] != 'N')    
            return mat[0][0] ;

    // Row2
    if(mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2])
        if(mat[1][0] != 'N')
            return mat[1][0] ;

    // Row3
    if(mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2])
        if(mat[2][0] != 'N')
            return mat[2][0] ;

    // Col1
    if(mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0])
        if(mat[0][0] != 'N')
            return mat[0][0] ;

    // Col2
    if(mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1])
        if(mat[0][1] != 'N')
            return mat[0][1] ;

    // Col3
    if(mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2])
        if(mat[0][2] != 'N')
            return mat[0][2] ;

    // Diagonal1
    if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
        if(mat[0][0] != 'N')
            return mat[0][0] ;

    // Diagonal2
    if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
        if(mat[0][2] != 'N')
            return mat[0][2] ;

    return 'N' ;
}

string tictactoe(vector<vector<int>>& moves) 
{
    vector<vector<char>> mat(3, vector<char> (3, 'N'));

    bool turn = true ;

    for(int i = 0 ; i < moves.size() ; i++ )
    {
        if(turn)
            mat[ moves[i][0] ][ moves[i][1] ] = 'A' ;
        else
            mat[ moves[i][0] ][ moves[i][1] ] = 'B' ;

        turn = !turn ;
    }

    string ret = "" ;
    char ch = getState(mat) ;

    if(ch == 'A' || ch == 'B')
    {
        ret += ch ;
        return ret ;
    }

    if(moves.size() < 9)
        return "Pending" ;

    return "Draw" ;
}
