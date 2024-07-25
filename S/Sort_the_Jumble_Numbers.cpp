// Sort the given jumbled number based on given mapping
// https://leetcode.com/problems/sort-the-jumbled-numbers
// Aman Kumar

// Runtime 165ms Beats 83.67% 
// Memory 80.75MB Beats88.84%
vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
{
    int n = nums.size();
    vector<pair<int,int>> val(n, pair<int,int> (0,0));

    for(int i = 0 ; i < n ; i++)
    {
        int num = nums[i];
        int j = 0, mapped = 0;

        if(num == 0)
            mapped = mapping[num];
        else
        {
            while(num > 0)
            {
                mapped = mapped + (pow(10,j) * mapping[num % 10]);
                num /= 10;
                j++;
            }
        }

        // Store mapped value and its index
        val[i].first = mapped;
        val[i].second = i;
    }

    // Sort in ascending order
    sort(val.begin(), val.end());

    vector<int> ret(n);

    for(int i = 0 ; i < n ; i++)
        ret[i] = nums[ val[i].second ];

    return ret;
}
