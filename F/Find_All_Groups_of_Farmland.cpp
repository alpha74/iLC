// Find top-left and bottom-right coords of farm lands
// https://leetcode.com/problems/find-all-groups-of-farmland/description/
// Aman Kumar

// Runtime 185ms Beats29.36%of users with C++
// Memory 101.13MB Beats28.82%of users with C++
bool find_farm(vector<vector<int>> &land, int i, int j, vector<int> &c)
{
    if(i < 0 || i >= land.size()) return false;
    if(j < 0 || j >= land[0].size()) return false;

    if(land[i][j] == 0) return false;

    c[0] = min(c[0], i);
    c[1] = min(c[1], j);
    c[2] = max(c[2], i);
    c[3] = max(c[3], j);

    land[i][j] = 0;     // Mark as visited

    find_farm(land, i+1, j, c);
    find_farm(land, i, j+1, c);
    find_farm(land, i-1, j, c);
    find_farm(land, i, j-1, c);

    return true;
}

vector<vector<int>> findFarmland(vector<vector<int>>& land) 
{
    vector<vector<int>> ret;

    for(int i = 0 ; i < land.size() ; i++)
    {
        for(int j = 0 ; j < land[0].size() ; j++)
        {
            vector<int> coords = {i,j,i,j};

            if(find_farm(land, i, j, coords))
                ret.push_back(coords);
        }
    }

    return ret;    
}
