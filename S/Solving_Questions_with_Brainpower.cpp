// Solve questions by using brainpower and skipping questions, to get max points
// https://leetcode.com/problems/solving-questions-with-brainpower/description/
// Aman Kumar

// Runtime 390 ms Beats 72.41%
// Memory 123.1 MB Beats 22.20%
long long recur(vector<vector<int>> &q, int index, vector<long long> &hash)
{
    if(index >= q.size()) 
        return 0 ;

    if(hash[index] != -1)
        return hash[ index ] ;

    long long ans = 0 ;

    // Either choose index or choose index+1
    ans = max(q[index][0] + recur(q, index + q[index][1] +1, hash), recur(q, index+1, hash)) ;

    hash[ index ] = ans ;
    return ans ;
}

long long mostPoints(vector<vector<int>>& questions) 
{
    vector<long long> hash(questions.size(), -1) ;

    return recur(questions, 0, hash) ;
/*
[[29,1],[90,5],[41,5],[46,3],[49,5],[49,2],[6,5],[36,5],[83,1],[60,2],[97,3],[54,2],[42,5],[42,2],[73,4],[38,4],[16,4],[44,2],[81,2],[76,3],[60,4],[83,4],[94,2],[13,5],[7,2],[77,2],[18,2],[91,2],[43,4],[84,2],[45,1],[42,5],[54,4],[18,4],[96,5],[44,3],[55,4],[49,3],[86,2],[41,3],[54,3],[66,2],[22,3],[35,5],[89,3],[61,2],[1,3],[72,1],[13,3],[70,4],[12,4],[35,5],[16,3],[67,3],[70,3],[5,4],[74,4],[36,1],[47,2],[72,1]]

[[1,1],[2,2]]

[[3,2]]
*/
}
