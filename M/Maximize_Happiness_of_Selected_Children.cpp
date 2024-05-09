// Return max happiness value based on given conditions
// https://leetcode.com/problems/maximize-happiness-of-selected-children/description/
// Aman Kumar

// Runtime 223ms Beats15.33%of users with C++
// Memory 108.78MB Beats23.42%of users with C++
long long maximumHappinessSum(vector<int>& hap, int k) 
{
    long long ret = 0;
    int n = hap.size();

    sort(hap.rbegin(), hap.rend());

    for(int i = 0 ; i < n && k-- ; i++)
    {
        if(hap[i]-i <= 0) break;
        ret += (hap[i] - i);
    }

    return ret;    
}
