// Return number of times word balloon can be formed from given string
// https://leetcode.com/problems/maximum-number-of-balloons/
// Aman Kumar

// Runtime: 6 ms, faster than 57.79% of C++ online submissions for Maximum Number of Balloons.
// Memory Usage: 6.5 MB, less than 98.81% of C++ online submissions for Maximum Number of Balloons.
int maxNumberOfBalloons(string text) 
{
    vector<int> freq (26, 0);

    for( int i = 0 ; i < text.length() ; i++ )
    {
        freq[ text[i] -'a']++ ;
    }

    // balloon
    // a1 b1 l2 n1 o2
    int ret = INT_MAX ;

    vector<pair<int,int>> balloon = {
        {0,1}, {1,1}, {11,2}, {13,1}, {14,2}
    } ;

    for( int i = 0 ; i < balloon.size() ; i++ )
    {
        int rem = freq[ balloon[i].first ] / balloon[i].second ;

        ret = min( rem, ret ) ;
    }

    return ret ;
}
