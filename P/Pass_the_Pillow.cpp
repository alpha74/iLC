// Given time and n, return index at which pillow is present
// https://leetcode.com/problems/pass-the-pillow/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.8 MB Beats 92.17%
int passThePillow(int n, int time) 
{
    if(time < n)
        return time + 1 ;

    int q = time / (n-1) ;  // 1 
    int r = time % (n-1) ;  // 2

    // If q is odd, then direction is left -> right
    if(q % 2 == 0)
        return r+1 ;
    
    // else, right to left
    return n - r;
}
