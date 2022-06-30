// Count items matching a rule
// https://leetcode.com/problems/count-items-matching-a-rule/
// Aman Kumar

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
{
    int ret = 0 ;

    for( int i = 0 ; i < items.size() ; i++)
    {
        if( ruleKey == "type" && items[i][0] == ruleValue )
            ret++ ;
        else if( ruleKey == "color" && items[i][1] == ruleValue )
            ret++ ;
        else if( ruleKey == "name" && items[i][2] == ruleValue )
            ret++ ;
    }

    return ret ;
}
