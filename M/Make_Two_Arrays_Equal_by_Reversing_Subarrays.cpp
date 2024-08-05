// Make two arrays of same length equal by reversing sub arrays
// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
// Aman Kumar

// Runtime 4ms Beats 91.21%
// Memory 17.43MB Beats 86.13% 
bool canBeEqual(vector<int>& target, vector<int>& arr) 
{
    sort(target.begin(), target.end()) ;
    sort(arr.begin(), arr.end()) ;

    bool ret = true ;

    for( int i = 0 ; i < arr.size() && ret ; i++ )
    {
        if( target[i] != arr[i] )
            ret = false ;
    }

    return ret ;
}
