// Given a pattern and list is strings, return bool for each string if it can be matched with pattern
// https://leetcode.com/problems/camelcase-matching/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 8.40MB Beats84.34%of users with C++
vector<bool> camelMatch(vector<string>& queries, string pattern) 
{
    vector<bool> ret;

    for(int i = 0 ; i < queries.size() ; i++)
    {
        bool flag = true;
        int j = 0;
        int k = 0;

        while(j < queries[i].length() && flag)
        {
            cout << "\n q: " << queries[i][j] ;
            cout << " p: " << pattern[k];
            if(queries[i][j] == pattern[k])
            {
                j++;
                k++;
            }
            else
            {
                // If Uppercase letter, then mark false
                if(queries[i][j] >= 'A' && queries[i][j] <= 'Z')
                    flag = false;
                else
                {
                    // Skip lowercase letters
                    while(j < queries[i].length() && 
                        queries[i][j] >= 'a' && queries[i][j] <= 'z')
                    {
                        if(queries[i][j] == pattern[k])
                            k++ ;
                        j++;
                    }
                }
            }
        }

        if(k < pattern.size())
            flag = false;

        ret.push_back(flag);
    }

    return ret;    
}
