// Given array, return all combinations having sum as Target. Repetions allowed
// https://leetcode.com/problems/combination-sum/
// Aman Kumar

void combSum(vector<vector<int>> &ret, vector<int> &curr, int &sum, int i, int &t, vector<int> &cd)
{
    if( sum == t )
    {
        ret.push_back( curr );
        return ;
    }
    if( i >= cd.size() || sum > t)
        return ;

    for( ; i < cd.size() ; i++ )
    {
        curr.push_back( cd[i] ) ;
        sum += cd[i] ;
        combSum( ret, curr, sum, i, t, cd) ;

        sum -= cd[i] ;
        curr.pop_back() ;
    }

}

vector<vector<int>> combinationSum(vector<int>& cd, int target) 
{
    vector<vector<int>> ret ;
    int sum = 0 ;
    int i = 0 ; 
    vector<int> curr ;

    combSum( ret, curr, sum, i, target, cd) ;

    return ret ;
}
