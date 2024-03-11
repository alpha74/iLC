// Return the given string after sorting according to order string
// https://leetcode.com/problems/custom-sort-string/description/?
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 8.38MB Beats26.14%of users with C++
string customSortString(string order, string s) 
{
    unordered_map<char,int> freq;

    for(int i = 0 ; i < s.length() ; i++)
    {
        freq[s[i]]++;
    }

    string ret = "";
    for(int i = 0 ; i < order.length() ; i++)
    {
        if(freq[order[i]] > 0)
        {
            int count = freq[order[i]];

            while(count--)
                ret += order[i];
            
            freq[order[i]] = 0;
        }
    }

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(freq[s[i]] > 0)
            ret += s[i];
    }

    return ret;
  }
