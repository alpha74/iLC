// Given people weight list and boat limit, return min number of trips
// https://leetcode.com/problems/boats-to-save-people/description/
// Aman Kumar

// Runtime 80 ms Beats 88.31%
// Memory 41.9 MB Beats 93.2%
int numRescueBoats(vector<int>& people, int limit) 
{
    int ret = 0, left = 0, right = people.size()-1 ;

    sort(people.begin(), people.end()) ;

    while(left <= right)
    {
        int sum = people[left] + people[right] ;

        if(sum <= limit)
        {
            left++ ;
            right-- ;
            ret++ ;
        }
        else
        {
            right-- ;
            ret++ ;
        }
    }

    return ret ;    
}
