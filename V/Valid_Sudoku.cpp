// Check if given sudoku is valid
// https://leetcode.com/problems/valid-sudoku/
// Aman Kumar

// Iterative Check
bool rowCheck( vector<vector<char>> board, int row )
{
    vector<int> freq( 10, 0 ) ;
    bool ret = true ;

    for( int i = 0 ; i < 9 && ret ; i++ )
    {
        if( board[row][i] != '.' )
        {
            if( freq[ board[row][i] -'0' ] == 0 )
                freq[ board[row][i] -'0' ] = 1 ;
            else
                ret = false ;
        }
    }

    return ret ;
}

bool colCheck( vector<vector<char>> &board, int col )
{
    vector<int> freq( 10, 0 ) ;
    bool ret = true ;

    for( int i = 0 ; i < 9 && ret ; i++ )
    {
        if( board[i][col] != '.' )
        {
            if( freq[ board[i][col] -'0'] == 0 )
                freq[ board[i][col] -'0'] = 1 ;
            else
                ret = false ;
        }
    }

    return ret ;
}

bool squareCheck( vector<vector<char>> &board, int x, int y )
{
    vector<int> freq( 10, 0 ) ;
    bool ret = true ;

    int limx = x + 3 ;
    int limy = y + 3 ;

    for( int i = x ; i < limx && ret ; i++ )
    {
        for( int j = y ; j < limy && ret ; j++ )
        {
            if( board[i][j] != '.')
            {
                if( freq[ board[i][j] -'0'] == 0 )
                    freq[ board[i][j] -'0'] = 1 ;
                else
                    ret = false ;
            }
        }
    }

    return ret ;
}

bool isValidSudoku(vector<vector<char>>& board) 
{
    bool ret = true ;

    // Check all rows
    for( int i = 0 ; i < 9 && ret ; i++ )
    {
        ret = ret & (rowCheck( board, i )) ;
    }

    if( !ret )
        return ret ;

    // Check all columns
    for( int i = 0 ; i < 9 && ret ; i++ )
    {
        ret = ret & (colCheck( board, i)) ;
    }

    if( !ret )
        return ret ;

    // Check all squares
    for( int i = 0 ; i < 8 && ret ; i+=3 )
    {
        for( int j = 0 ; j < 8 && ret ; j +=3 )
        {
            ret = ret & ( squareCheck( board, i, j)) ;
        }
    }

    return ret ;
}



// Using Hashmap
int getBlock(int i, int j)
{
    return 3 * (i/3) + (j/3) ;
}

bool isValidSudoku(vector<vector<char>>& board) 
{
    int n = board.size() ;

    vector<unordered_map<char,int>> rowHash(n) ;
    vector<unordered_map<char,int>> colHash(n) ;
    vector<unordered_map<char,int>> blockHash(n) ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            if( board[i][j] == '.')
                continue ;

            if( rowHash[ i ][ board[i][j] ] == 1 )
                return false ;

            if( colHash[j][ board[i][j] ] == 1 )
                return false ;

            if( blockHash[ getBlock(i, j) ][ board[i][j] ] == 1 )
                return false ;

            rowHash[ i ][ board[i][j] ] = 1 ;
            colHash[j][ board[i][j] ] = 1 ;
            blockHash[ getBlock(i, j) ][ board[i][j] ] = 1 ;
        }
    }

    return true ;
}
