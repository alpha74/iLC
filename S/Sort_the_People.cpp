// Sort list of people based on heights
// https://leetcode.com/problems/sort-the-people/
// Aman Kumar

// Runtime: 66 ms, faster than 67.84% of C++ online submissions for Sort the People.
// Memory Usage: 22.2 MB, less than 77.05% of C++ online submissions for Sort the People.
static bool sortName(pair<int,string> p1, pair<int,string> p2)
{
    if( p1.first > p2.first )
        return true ;
    return false ;
}

vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
{
    vector<pair<int,string>> data ;
    int n = names.size() ;

    for( int i = 0 ; i < n; i++ )
    {
        data.push_back({heights[i], names[i]}) ;
    }

    sort( data.begin(), data.end() ) ;

    for( int i = 0 ; i < n ; i++ )
        names[n-i-1] = data[i].second ;

    return names ;
}
