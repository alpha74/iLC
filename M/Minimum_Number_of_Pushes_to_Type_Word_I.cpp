// Min number of keypad pushes required to type given word
// https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/description/
// Aman Kumar

// Runtime 0ms Beats 100.00% 
// Memory 8.06MB Beats 41.93%
int minimumPushes(string word) 
{ 
    int n = word.length();
    int counter = 1, ret = 0;

    while(n > 0)
    {
        if(n > 8)
            ret += (counter * 8);
        else
            ret += (counter * n);
        
        n -= 8;
        counter++;
    }

    return ret;
}
