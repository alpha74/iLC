// Categorize the box accoding to given criteria
// https://leetcode.com/problems/categorize-box-according-to-criteria/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.8 MB Beats 99.13%
string categorizeBox(int l, int w, int h, int m) 
{
    bool heavy = false ;
    bool bulky = false ;

    if(l >= 10000 || w >= 10000 || h >= 10000 || l*w >= 1000000000/h)  
        bulky = true ;

    if(m >= 100)
        heavy = true; 

    if(bulky && heavy)
        return "Both" ;

    if(!bulky && !heavy)
        return "Neither" ;

    if(bulky)
        return "Bulky" ;

    return "Heavy" ;
}
