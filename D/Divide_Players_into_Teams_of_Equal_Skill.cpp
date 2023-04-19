// Divide players into team of 2, each team having equal skill
// https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description/
// Aman Kumar

// Runtime 99 ms Beats 68.45% 
// Memory 52.6 MB Beats 45.77%
long long dividePlayers(vector<int>& skill) 
{
    long long ret = 0 ;
    bool possible = true ;
    int n = skill.size() ;

    sort(skill.begin(), skill.end()) ;

    long long sum = skill[0] + skill[ n-1 ] ;        

    for(int i = 0 ; i < (n/2) && possible ; i++ )
    {
        //cout << "\n skill: " << skill[i] << " " << skill[n-i-1] << " sum: " << sum ;

        if( (skill[i] + skill[n-i-1]) == sum )
        {
            ret = ret + (skill[i] * skill[n-i-1]) ;
        }
        else
            possible = false ;
    }

    if(!possible)
        return -1 ;
    return ret ;    
}
