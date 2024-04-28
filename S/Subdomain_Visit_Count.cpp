// Return subdomain visit count
// https://leetcode.com/problems/subdomain-visit-count/description/
// Aman Kumar

// Runtime 7ms Beats91.70%of users with C++
// Memory 17.76MB Beats8.10%of users with C++
vector<string> getSubdomains(string s)
{
    vector<string> ret;
    int n = s.length();
    string temp = "";

    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(s[i] == '.')
            ret.push_back(temp);
        else if(s[i] == ' ')
        {
            ret.push_back(temp);
            break;
        }
        
        temp = s[i] + temp;
    }

    if(ret.size() == 0)
        ret.push_back(temp);

    return ret;
}

int getCounts(string s) 
{
    string num = "";
    int n = s.length();

    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == ' ')
            break;
        num += s[i];
    }
    return stoi(num);
}

vector<string> subdomainVisits(vector<string>& cpdomains) 
{
    unordered_map<string,int> freq;
    vector<string> ret;
    for(int i = 0 ; i < cpdomains.size() ; i++)
    {
        vector<string> subd = getSubdomains(cpdomains[i]);
        int count = getCounts(cpdomains[i]);

        for(int j = 0 ; j < subd.size() ; j++)
            freq[subd[j]] += count;
    }

    for(auto iter = freq.begin() ; iter != freq.end() ; iter++)
    {
        ret.push_back(to_string(iter -> second) + " " + iter -> first);
    }

    return ret;
}
