// Convert an array into a 2D array with given conditions
// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/
// Aman Kumar

// Runtime 11 ms Beats 91.51%
// Memory 32.8 MB Beats 5.42%
vector<vector<int>> findMatrix(vector<int>& nums) 
{
    int n = nums.size() ;
    vector<unordered_map<int,bool>> allhash ;

    unordered_map<int,bool> hash ;

    for(int i = 0 ; i < n ; i++)
    {
        bool cleared = false ;

        // Find a hash map which curr element can be fit
        for(int j = 0 ; j < allhash.size() && !cleared ; j++)
        {
            if(allhash[j].find( nums[i] ) == allhash[j].end())
            {
                cleared = true ;
                allhash[j][ nums[i] ] = true ;
            }
        }

        // If not cleared, create new hash map
        if(!cleared)
        {
            unordered_map<int,bool> newhash ;
            newhash[ nums[i] ] = true;
            allhash.push_back( newhash ) ;
        }
    }    

    // Convert hash list to vector
    vector<vector<int>> ret ;

    for(int i = 0 ; i < allhash.size() ; i++)
    {
        vector<int> row ;

        for(auto it = allhash[i].begin() ; it != allhash[i].end() ; it++)
            row.push_back(it -> first) ;
        
        ret.push_back(row) ;
    }

    return ret ;
}
