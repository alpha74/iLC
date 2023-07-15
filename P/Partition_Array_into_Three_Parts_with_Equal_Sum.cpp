// Partition array into three parts with equal sum
// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/description/
// Aman Kumar

// Runtime 52 ms Beats 68.22%
// Memory 32.4 MB Beats 75.93%
bool canThreePartsEqualSum(vector<int>& arr) 
{
    int sum = 0 ;
    int n = arr.size() ;

    for(int i = 0 ; i < n ; i++)
        sum += arr[i] ;

    if(sum % 3 != 0)
        return false ;
    
    int partSum = sum / 3 ;
    int curr = 0 ;
    int parts = 0 ;
    int window = 0 ;

    // Count number of partitions having sum = part_sum
    for(int i = 0 ; i < n ; i++ )
    {
        curr += arr[i] ;
        window++ ;

        if(curr == partSum)
        {
            curr = 0 ;
            parts++ ;
            window = 0 ;
        }
    }

    if(curr >= partSum && window > 0)
        parts++ ;

    return parts >= 3 ;

/*
1, -1, 1, -1
*/
}
