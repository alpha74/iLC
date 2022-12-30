// Min number of operations needed to move all balls to each box
// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
// Aman Kumar

// Runtime 4 ms Beats 95.48%
// Memory 9.8 MB Beats 7.20%

vector<int> minOperations(string boxes) 
{
    int n = boxes.size();

    vector<int> leftOnes(n, 0);
    vector<int> leftCost(n, 0);

    vector<int> rightOnes(n, 0);
    vector<int> rightCost(n, 0);

    vector<int> ans(n, 0);

    for( int i = 0 ; i < n; i++ ) 
    {
        leftCost[i] = i ? (leftCost[i - 1] + leftOnes[i - 1]) : 0;
        leftOnes[i] = (i ? leftOnes[i - 1] : 0) + (boxes[i] == '1' ? 1 : 0);
    }

    for( int i = n - 1 ; i >= 0 ; i-- ) 
    {
        rightCost[i] = i < n - 1 ? (rightCost[i + 1] + rightOnes[i + 1]) : 0;
        rightOnes[i] = (i < n - 1 ? rightOnes[i + 1] : 0) + (boxes[i] == '1' ? 1 : 0);
    }

    for (int i = 0; i < n; ++i) 
    {
        ans[i] = leftCost[i] + rightCost[i];
    }
    return ans;
}
