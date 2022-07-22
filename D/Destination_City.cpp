// Find city which does not have outgoing roads
// https://leetcode.com/problems/destination-city/
// Aman Kumar

string destCity(vector<vector<string>>& paths) 
{
    string ret = "" ;

    for( int i = 0 ; i < paths.size() && ret == "" ; i++ )
    {
        string dest = paths[i][1] ;

        // Check if second city occurs as first or not
        bool sourceFound = false ;
        for( int j = 0 ; j < paths.size() && !sourceFound ; j++ )
        {
            if( i != j && dest == paths[j][0] )
                sourceFound = true ;
        }

        if( sourceFound == false )
            ret = dest ;
    }

    return ret ;
}
