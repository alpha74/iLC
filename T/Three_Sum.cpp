// Return all combinations having sum 0
// https://leetcode.com/problems/3sum/
// Aman Kumar

// Runtime 56ms Beats 84.23%
// Memory 27.42MB Beats 66.02%
vector<vector<int>> threeSum(vector<int>& nums) 
{
    int size = nums.size();
    sort(nums.begin(),nums.end());
    
    vector<vector<int>> ret;
    
    // Three pointers approach
    for(int i = 0 ; i < size ; i++)
    {
        int low = i+1, high = size-1 ;
        
        while(low < high)
        {
            int sum = nums[i] + nums[low] + nums[high] ;
            
            if(sum == 0)
            {
                ret.push_back({ nums[i], nums[low], nums[high] });
                low++;
                high--;
                
                // Skip duplicates
                while(low < high && nums[low] == nums[low-1])
                    low++;
                
                // Skip duplicates
                while(high>low && nums[high] == nums[high+1] )
                    high--;
                
            }
            else if( sum < 0 )
                low++;
            else
                high--;
        }
        
        // Skip duplicates
        while(i+1 < size && nums[i+1] == nums[i])
        {
            i++;
        }
    }    
    
    return ret;
}
