// Return number of senior citizens based on given data format
// https://leetcode.com/problems/number-of-senior-citizens
// Aman Kumar

// Runtime 3ms Beats 91.86%
// Memory 18.64MB Beats 17.69%
int getAge(string s)
{
    string age = "";
    age = age + s[11] + s[12];
    return stoi(age);
}

int countSeniors(vector<string>& details) 
{
    int ret = 0;

    for(int i = 0 ; i < details.size() ; i++)
    {
        if(getAge(details[i]) > 60) ret++ ;
    }

    return ret;
}
