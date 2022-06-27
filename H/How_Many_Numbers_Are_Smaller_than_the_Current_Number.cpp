// Return how many numbers are smaller than current number
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Aman Kumar

vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
{   
    vector<int> arr = nums ;

    sort( arr.begin(), arr.end() ) ;

    unordered_map<int,int> hash ;

    for( int i = arr.size()-1 ; i >= 0 ; i-- )
    {
        hash[ arr[i] ] = i ;
    }

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        arr[i] = hash[ nums[i] ] ;
    }

    return arr ;
}
