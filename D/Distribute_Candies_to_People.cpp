// Keep distributing candies to people in loop
// https://leetcode.com/problems/distribute-candies-to-people/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.61MB Beats39.03%of users with C++
vector<int> distributeCandies(int candies, int num_people) 
{
    vector<int> ret(num_people, 0);
    int candy = 0;

    int i = 0;

    while(candies > 0)
    {
        candy++;
        ret[i] += min(candy, candies) ;
        candies -= candy;

        i++;

        if(i == num_people)
            i = 0;
    }

    return ret;   
}
