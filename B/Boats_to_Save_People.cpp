// Given people weight list and boat limit, return min number of trips
// https://leetcode.com/problems/boats-to-save-people/description/
// Aman Kumar

// Runtime 57ms Beats60.02%of users with C++
// Memory 45.49MB Beats46.86%of users with C++
int numRescueBoats(vector<int>& people, int limit) 
{
    int ret = 0, left = 0, right = people.size()-1 ;

    sort(people.begin(), people.end()) ;

    while(left <= right)
    {
        int sum = people[left] + people[right] ;
        ret++;

        if(sum <= limit)
        {
            left++ ;
            right-- ;
        }
        else
            right-- ;
    }

    return ret ;    
}
