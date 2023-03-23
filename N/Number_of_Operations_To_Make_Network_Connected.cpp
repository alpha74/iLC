// Number of cables needed to connect forest network of computers
// https://leetcode.com/problems/number-of-operations-to-make-network-connected/description/
// Aman Kumar

// Runtime 143 ms Beats 55.35%
// Memory 48 MB Beats 49.85%
void dfs(vector<vector<int>> &adj, int s, vector<bool> &visited)
{
    visited[ s ] = true ;

    for( int i = 0 ; i < adj[ s ].size() ; i++ )
    {
        if( !visited[ adj[s][i] ])
            dfs(adj, adj[s][i], visited ) ;
    } 
}

int makeConnected(int n, vector<vector<int>> &connections)
{
    // For n nodes, there are min n-1 connections
    if(connections.size() < (n-1))
        return -1 ;

    // Node -> { list of connected nodes }
    vector<vector<int>> adj(n) ;

    // Create adjacency list
    for(int i = 0 ; i < connections.size() ; i++)
    {
        adj[ connections[i][0] ].push_back( connections[i][1] ) ;
        adj[ connections[i][1] ].push_back( connections[i][0] ) ;
    }

    vector<bool> visited(n,0) ;
    int forests = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( !visited[i] )
        {
            // Discover all connected nodes
            dfs(adj, i, visited) ;
            forests++ ;
        }
    }

    return forests -1 ;
}
