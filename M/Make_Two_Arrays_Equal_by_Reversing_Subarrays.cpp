// Make two arrays of same length equal by reversing sub arrays
// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
// Aman Kumar

bool canBeEqual(vector<int>& target, vector<int>& arr) 
{
    sort( target.begin(), target.end() ) ;
    sort( arr.begin(), arr.end() ) ;

    bool ret = true ;

    for( int i = 0 ; i < arr.size() && ret ; i++ )
    {
        if( target[i] != arr[i] )
            ret = false ;
    }

    return ret ;
}
