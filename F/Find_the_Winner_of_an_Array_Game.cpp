// Find winner of any array game
// https://leetcode.com/problems/find-the-winner-of-an-array-game/description/?envType=daily-question&envId=2023-11-05
// Aman Kumar

// Runtime Details 79ms Beats 82.38%of users with C++
// Memory Details 63.51MB Beats 39.03%of users with C++
int getWinner(vector<int>& arr, int k) 
{
    int winner = arr[0] ;
    int wins = 0 ;

    for(int i = 1 ; i < arr.size() ; i++ )
    {
        if(winner > arr[i])
            wins++ ;
        else
        {
            wins = 1 ;
            winner = arr[i] ;
        }

        if(wins == k)
            break ;
    }    

    return winner;
}
