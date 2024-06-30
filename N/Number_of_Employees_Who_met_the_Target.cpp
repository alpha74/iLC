// Find number of employees who met the target of min target hours
// https://leetcode.com/problems/number-of-employees-who-met-the-target/description/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 23.24MB Beats 60.14% 

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) 
{
    int ret = 0;
    int n = hours.size();

    for(int i = 0 ; i < n ; i++)
        if(hours[i] >= target)  ret++;
    
    return ret;    
}
