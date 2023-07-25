// Given car position, speed and target, return number of fleets
// https://leetcode.com/problems/car-fleet/description/
// Aman Kumar

// Runtime 276 ms Beats 34.31%
// Memory 74 MB Beats 93.78%
static bool sortPair(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second ;
}
int carFleet(int target, vector<int>& position, vector<int>& speed) 
{
    /*
        10 8 0 5 3
        2 4 1 1 3

        10 8 5 3 0
        2  4 1 3 1
        2-4 1-3 1

        0 2 4
        4 2 1

        1 2 4
        1-2-4
    */    

    int n = position.size() ;
    vector<pair<int,int>> sp(n) ;

    for(int i = 0 ; i < n ; i++)
        sp[i] = { speed[i], position[i] } ;

    // Sort speeds based on initial position of cars
    sort(sp.begin(), sp.end(), sortPair) ;

    stack<double> stk ;

    for(int i = 0 ; i < n ; i++)
    {
        // Calculate time taken to reach target
        double t = (target - sp[i].second) / ((double) sp[i].first) ;

        // If new car takes more time to reach target, then its slow
        // and will slow down previous (right side) car.
        // Hence, it will be in same fleet
        while(!stk.empty() && t >= stk.top())
            stk.pop() ;

        stk.push(t) ;
    }

    return stk.size() ;
}
