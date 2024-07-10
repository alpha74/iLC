// Return min number of moves required to move to main folder
// https://leetcode.com/problems/crawler-log-folder/description
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 13.88MB Beats 84.88% 
 int minOperations(vector<string>& logs) 
{
    int ret = 0;

    for(int i = 0 ; i < logs.size() ; i++)
    {
        if(logs[i] == "./");
        else if(logs[i][0] == '.')
        {
            if(ret > 0) ret--;
        }
        else
            ret++ ;
    }

    return ret;    
}
