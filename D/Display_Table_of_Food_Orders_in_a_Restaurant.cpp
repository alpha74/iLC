// Given all orders, show data in Table, Items count format
// https://leetcode.com/problems/display-table-of-food-orders-in-a-restaurant/description/
// Aman Kumar

// Runtime 123 ms Beats 79.41%
// Memory 62.8 MB Beats 71.57%
static bool orderSort(vector<string> &a, vector<string> &b)
{
    if(a[0] == "Table")
        return true ;
    if(b[0] == "Table")
        return false ;

    return stoi(a[0]) < stoi(b[0]) ;
}

vector<vector<string>> displayTable(vector<vector<string>>& orders) 
{
    set<string> items ;

    for(int i = 0 ; i < orders.size() ; i++) 
        items.insert( orders[i][2] ) ;

    unordered_map<string,int> itemIndex ;
    int index = 0 ;

    for(auto it = items.begin() ; it != items.end() ; it++)
    {
        itemIndex[ *it ] = index++ ;
    }

    unordered_map<string,vector<int>> orderHash ;
    vector<int> itemCount( items.size(), 0 ) ;

    for(int i = 0 ; i < orders.size() ; i++ )
    {
        if(orderHash.find(orders[i][1]) == orderHash.end())
            orderHash[ orders[i][1] ] = itemCount ;

        orderHash[ orders[i][1] ][ itemIndex[ orders[i][2] ] ]++ ;
    }

    // Output list
    vector<vector<string>> ret(orderHash.size() +1, vector<string> (items.size()+1)) ;
    int retIndex = 0 ;

    // Create header row
    vector<string> header ;
    header.push_back("Table") ;

    for(auto it = items.begin() ; it != items.end() ; it++ )
        header.push_back( *it ) ;

    ret[ retIndex++ ] = header ;

    for(auto it = orderHash.begin() ; it != orderHash.end() ; it++ )
    {
        vector<string> row ;
        row.push_back( it -> first ) ;

        for(int i = 0 ; i < (it -> second).size() ; i++)
            row.push_back( to_string((it -> second)[i] )) ;

        ret[ retIndex++ ] = row ;
    }

    sort(ret.begin(), ret.end(), orderSort) ;

    return ret ;
}
