// Return all combinations having sum 0
// https://leetcode.com/problems/3sum/
// Aman Kumar

vector<vector<int>> threeSum(vector<int>& nums) 
{
    int size = nums.size();

    sort(nums.begin(),nums.end());

    vector<vector<int>> ret;

    for(int i = 0 ; i < size ; i++ )
    {
        int low = i+1, high = size-1 ;

        while( low < high )
        {
            int sum = nums[i] + nums[low] + nums[high] ;

            if(sum == 0 )
            {
                ret.push_back({ nums[i], nums[low], nums[high] });
                low++;
                high--;

                // Skip the duplicates from left to right
                while( low < high && nums[low] == nums[low-1] )
                {
                    low++;
                }
                // skip duplicates from right to left
                while(high>low && nums[high] == nums[high+1] )
                {
                    high--;
                }
            }
            else if( sum < 0 )
                low++;

            else
                high--;

        }

        // Skip duplicates from left to right
        while(i+1 < size && nums[i+1] == nums[i] )
        {
            i++;
        }
    }    

    return ret;
}
