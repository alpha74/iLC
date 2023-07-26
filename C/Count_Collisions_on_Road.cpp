// Given three car directions, return number of collisions
// https://leetcode.com/problems/count-collisions-on-a-road/description/
// Aman Kumar

// Runtime 38 ms Beats 98.48%
// Memory 16.3 MB Beats 89.18%
char getResultant(char l, char r, int &count, int freq)
{
    if(l == r)
        return r ;

    if(l == 'R')
    {
        if(r == 'L')
            count += freq+1;
        else 
            count += freq ;
        return 'S' ;
    }

    if(l == 'L')
        return r ;

    if(l == 'S')
    {
        if(r == 'L')
        {
            count += 1 ;
            return 'S' ;
        }
        else
            return 'R' ;
    }

    return 'X' ;
}

int countCollisions(string directions) 
{
    /*
        All mapping decisions and outcomes

        LR -> R
        LS -> S
        
        RL -> S +2
        RS -> S +1

        SL -> S +1
        SR -> R
    */  

    char prev = directions[0] ;

    int count = 0 ;
    int freq = 1 ;
    int n = directions.length() ;

    for(int i = 1 ; i < n ; i++)
    {
        char r = directions[i] ;

        // Maintain total same cars which will be hit
        if(prev == r)
            freq++ ;
        else
        {
            prev = getResultant(prev, r, count, freq) ;
            freq = 1 ;
        }
    }  
    return count ;
/*
"RLRSLRSLL"
"LLRRSS"
"LLS"
"S"
*/
}
