// Maximum units that can be loaded on a truck given truck box capacity and units/box.
// https://leetcode.com/problems/maximum-units-on-a-truck/
// Aman Kumar

static bool sortBox( vector<int> a, vector<int> b)
{
    return a[1] > b[1] ;
}

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
{
    sort( boxTypes.begin(), boxTypes.end(), sortBox ) ;

    int units = 0 ;

    for( int i = 0 ; i < boxTypes.size() && truckSize > 0 ; i++ )
    {
        if( truckSize >= boxTypes[i][0])
        {
            units += ( boxTypes[i][0] * boxTypes[i][1] ) ;
            truckSize -= boxTypes[i][0] ;
        }
        else
        {
            units += ( truckSize * boxTypes[i][1] ) ;
            truckSize = 0 ;
        }
    }

    return units ;
}
