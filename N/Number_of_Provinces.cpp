// Return number of provinces given connected array
// https://leetcode.com/problems/number-of-provinces/description/
// Aman Kumar

// Runtime 14 ms Beats 99.62%
// Memory 13.5 MB Beats 97.75%
void search(int index, vector<vector<int>> &conn, vector<bool> &v)
{
    if(v[index] == 1)
        return ;

    v[index] = 1 ;

    for(int i = 0 ; i < conn.size() ; i++)
    {
        if(v[i] == 0 && conn[index][i] == 1)
            search(i, conn, v) ;
    }
}

int findCircleNum(vector<vector<int>>& isConnected) 
{
    int n = isConnected.size() ;
    vector<bool> visited(n,0) ;

    int ret = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(visited[i] == 0)
        {
            search(i, isConnected, visited) ;
            ret++ ;
        }
    }

    return ret ;
}
