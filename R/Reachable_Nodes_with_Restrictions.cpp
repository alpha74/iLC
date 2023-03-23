// Return count of reachable nodes from node0 with given blocked nodes in tree
// https://leetcode.com/problems/reachable-nodes-with-restrictions/description/
// Aman Kumar

// Runtime 546 ms Beats 85.77%
// Memory 154.8 MB Beats 86.95%
void dfs(vector<vector<int>> &adj, int s, int &ret, vector<bool> &visited, vector<bool> &blocked)
{
    visited[ s ] = 1 ;
    ret++ ;

    for(int i = 0 ; i < adj[ s ].size() ; i++ )
    {
        // If not visited and not blocked
        if(!visited[ adj[s][i] ] && blocked[ adj[s][i] ] == 0)
            dfs(adj, adj[s][i], ret, visited, blocked) ;

    }
}

int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) 
{
    vector<vector<int>> adj(n) ;

    // Build adjacency list
    for(int i = 0 ; i < edges.size() ; i++ )
    {
        adj[ edges[i][0] ].push_back( edges[i][1] ) ;
        adj[ edges[i][1] ].push_back( edges[i][0] ) ;
    }

    vector<bool> blocked(n,0) ;

    // Build restricted 
    for(int i = 0 ; i < restricted.size() ; i++)
        blocked[ restricted[i] ] = 1 ;

    int ret = 0 ;
    vector<bool> visited(n,0) ;

    dfs(adj, 0, ret, visited, blocked) ;

    return ret ;
}
