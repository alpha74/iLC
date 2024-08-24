// Return all sequential digits in given range of low and high
// https://leetcode.com/problems/sequential-digits/description/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 7.51MB Beats 48.46%
vector<int> sequentialDigits(int low, int high) 
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<int> all_seq;

    // Generate all sequential numbers
    for(int d = 2 ; d <= 9 ; d++)
    {            
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int count = d;
            int curr = nums[i];
            int newnum = 0;
            while(count-- && curr >= 1 && curr <= 9)
            {
                newnum = newnum * 10 + curr;
                curr++;
            }

            // when all digits are utilized
            if(count == -1)
                all_seq.push_back(newnum);
        }
    }

    vector<int> ret;

    // Filter numbers in range
    for(int i = 0 ; i < all_seq.size() ; i++)
    {
        if(all_seq[i] >= low && all_seq[i] <= high)
            ret.push_back(all_seq[i]);
    }

    return ret;
}
