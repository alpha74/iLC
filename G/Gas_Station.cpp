// Given array of gas and cost for n stations, return starting station from where circuit can be completed.
// https://leetcode.com/problems/gas-station/description/
// Aman Kumar

// Runtime 131 ms Beats 81.73%
// Memory 108.5 MB Beats 80.83%
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
{
    int totalGas = 0, totalCost = 0 ;
    int index = 0, currGas = 0 ;

    for(int i = 0 ; i < gas.size() ; i++)
    {
        totalGas += gas[i] ;
        totalCost += cost[i] ;

        currGas += (gas[i] - cost[i]) ;

        // If currGas is -ve, then indices (0 -> index) cannot be used for starting
        if(currGas < 0)
        {
            index = i+1 ;
            currGas = 0 ;
        }
    }

    if(totalGas < totalCost)
        return -1 ;
    return index ;
}
