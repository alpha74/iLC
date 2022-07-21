// Given string denoting rod index and color of rod, return number of rods having rings of all three colors.
// https://leetcode.com/problems/rings-and-rods/
// Aman Kumar

struct RingColor
{
    int r ;
    int g ;
    int b ;
    
    RingColor()
    {
        r = 0 ;
        g = 0 ;
        b = 0 ;
    }
} ;

class Solution {
public:
    int countPoints(string rings) 
    {
        vector<RingColor> rods(11) ;
        
        for( int i = 0 ; i < rings.length() ; i+=2 )
        {
            string temp = "" ;
            temp += rings[i+1] ;
            int rodIndex = stoi( temp ) ;
            
            if( rings[i] == 'R')
                rods[ rodIndex ].r++ ;
            else if( rings[i] == 'B')
                rods[ rodIndex ].b++ ;
            else 
                rods[ rodIndex ].g++ ;
        }
        
        int ret = 0 ;
        
        for( int i = 0 ; i < 11 ; i++ )
        {
            if( rods[i].r > 0 && rods[i].g > 0 && rods[i].b > 0 )
                ret++ ;
        }
        return ret ;
    }
};
