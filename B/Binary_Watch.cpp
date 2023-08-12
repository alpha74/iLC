// Given a binary watch, and number of lights turned on, return all times which are possible.
// https://leetcode.com/problems/binary-watch/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.4 MB Beats 50.89%
int countSetBits(int n)
{
    int ret = 0 ;

    for(int i = 0 ; i < 32 ; i++)
    {
        if(n & 1)
            ret++ ;
        
        n = n >> 1 ;
    }

    return ret ;
}

vector<string> readBinaryWatch(int turnedOn) 
{
    vector<string> ret;

    for(int h = 0 ; h < 12 ; h++)
    {
        for(int m = 0 ; m < 60 ; m++)
        {
            if(countSetBits(h) + countSetBits(m) == turnedOn)
            {
                string t = to_string(h) ;

                if(m < 10)
                    t = t + ":0" + to_string(m) ;
                else
                    t = t + ":" + to_string(m) ;

                ret.push_back(t) ;
            }
        }
    }

    return ret ;    
}
