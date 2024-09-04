// Write methods to get adjacent and diagonal sum
// https://leetcode.com/problems/design-neighbor-sum-service/
// Aman Kumar

// Runtime 65ms Beats 99.70% 
// Memory 72.52MB Beats 33.04%
class NeighborSum {
    unordered_map<int,pair<int,int>> hash;
    vector<vector<int>> arr;
public:

    NeighborSum(vector<vector<int>>& grid) 
    {
        for(int i = 0 ; i < grid.size() ; i++)
        {
            for(int j = 0 ; j < grid[0].size() ; j++)
            {
                hash[ grid[i][j] ] = {i,j};
            }
        }

        arr = grid;
    }
    
    int adjacentSum(int value) 
    {
        int i = hash[value].first;
        int j = hash[value].second;

        int sum = 0;

        if(i-1 >= 0)            sum += arr[i-1][j];
        if(i+1 < arr.size())    sum += arr[i+1][j];
        if(j-1 >= 0)            sum += arr[i][j-1];
        if(j+1 < arr[0].size()) sum += arr[i][j+1];

        return sum;
    }
    
    int diagonalSum(int value) 
    {
        int i = hash[value].first;
        int j = hash[value].second;

        int sum = 0;

        // top left
        if(i-1 >= 0 && j-1 >= 0)            
            sum += arr[i-1][j-1];

        // top right
        if(i-1 >= 0 && j+1 < arr[0].size())    
            sum += arr[i-1][j+1];
        
        // bottom left
        if(i+1 < arr.size() && j-1 >= 0)
            sum += arr[i+1][j-1];

        // bottom right
        if(i+1 < arr.size() && j+1 < arr[0].size())
            sum += arr[i+1][j+1];

        return sum;
    }
};
