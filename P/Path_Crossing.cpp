// Given N,S,W,E directions, check if path crosses the path again
// https://leetcode.com/problems/path-crossing/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.46MB Beats11.51%of users with C++
bool isPathCrossing(string path) 
{
    map<vector<int>,bool> v ;
    int x = 0, y = 0 ;

    v[{0,0}] = 1;

    for(int i = 0 ; i < path.length() ; i++)
    {
        if(path[i] == 'N')
            y-- ;
        else if(path[i] == 'S')
            y++ ;
        else if(path[i] == 'W')
            x-- ;
        else 
            x++ ;
        
        vector<int> d = {x, y};

        if(v.find(d) != v.end())
            return true ;
        v[d] = 1;
    }

    return false;
}
