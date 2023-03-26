// Sort given matrix on student's kth score
// https://leetcode.com/problems/sort-the-students-by-their-kth-score/description/
// Aman Kumar

// Runtime 81 ms Beats 37.79%
// Memory 57.3 MB Beats 5.21%
static bool sortExam(pair<int,vector<int>> a, pair<int,vector<int>> b)
{
    if(a.first > b.first)
        return true ;
    return false ;
}

vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) 
{
    vector<pair<int,vector<int>>> arr(score.size()) ;

    for( int i = 0 ; i < score.size() ; i++ )
    {
        arr[i] = { score[i][k], score[i] } ;
    }

    sort(arr.begin(), arr.end(), sortExam) ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        score[i] = arr[i].second ;
    }

    return score ;
}
