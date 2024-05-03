// Compare version numbers given as . separated strings
// https://leetcode.com/problems/compare-version-numbers/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.82MB Beats12.99%of users with C++
vector<int> toInt(string s)
{
    vector<int> ret;
    string num = "";

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '.')
        {
            ret.push_back(stoi(num));
            num = "";
        }
        else
            num += s[i];
    }

    if(num.length() > 0)
        ret.push_back(stoi(num));

    return ret;
}

int compareVersion(string version1, string version2) 
{
    vector<int> v1 = toInt(version1);
    vector<int> v2 = toInt(version2);   
    int v1_len = v1.size();
    int v2_len = v2.size(); 

    int i = 0, j = 0;

    while(i < v1_len || j < v2_len)
    {
        int v1_val = 0;
        int v2_val = 0;

        if(i < v1_len)
            v1_val = v1[i];
        if(j < v2_len)
            v2_val = v2[i];

        if(v1_val < v2_val) return -1;
        if(v2_val < v1_val) return 1;
        i++ ;
        j++ ;
    }

    return 0;
}
