// Find largest perimter with area > 0
// https://leetcode.com/problems/largest-perimeter-triangle/
// Aman Kumar

bool validTriangle( int &a, int &b, int &c )
{
    if( a+b <= c)
        return false ;
    else if( b+c <= a )
        return false ;
    else if( c+a <= b )
        return false ;

    return true ;
}

int largestPerimeter(vector<int>& nums) 
{   
    sort( nums.begin(), nums.end() ) ;

    for( int i = nums.size() - 1 ; i >= 2 ; i-- )
    {
        if( validTriangle(nums[i], nums[i-1], nums[i-2] ) )
        {
            int sum = nums[i] + nums[i-1] + nums[i-2] ;

           return sum ;
        }
    }

    return 0 ;
}
