// Count number of teams which can be formed from given array of soldier ratings
// https://leetcode.com/problems/count-number-of-teams
// Aman Kumar

// Runtime 2907ms Beats 5.06%
// Memory 11.54MB Beats 59.43%
int numTeams(vector<int>& rating) 
{
    int n = rating.size();
    int ret = 0;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            for(int k = j+1 ; k < n ; k++)
            {
                if(rating[i] < rating[j] && rating[j] < rating[k])
                    ret++;
                
                if(rating[i] > rating[j] && rating[j] > rating[k])
                    ret++;
            }
        }
    }

    return ret;    
}
