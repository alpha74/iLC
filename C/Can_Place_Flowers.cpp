// Check if all flowers can be placed without having adjacent flowers
// https://leetcode.com/problems/can-place-flowers/
// Aman Kumar

// Runtime: 18 ms, faster than 90.66% of C++ online submissions for Can Place Flowers.
// Memory Usage: 20.3 MB, less than 21.81% of C++ online submissions for Can Place Flowers.
bool canPlaceFlowers(vector<int>& flowerbed, int n) 
{
    int size = flowerbed.size() ; 

    if( n == 0 )
        return true ;

    if( size == 1 )
    {
        if( n <= 1 && flowerbed[0] == 0 )
            return true ;
        else
            return false ;
    }

    // Now, size will be >1
    int i = 0 ;

    if( flowerbed[i] == 0 && flowerbed[i+1] == 0 )
    {
        n-- ;
        flowerbed[i] = 1 ;
        i = i+2 ;
    }
    else
        i++ ;

    for( ; i < size -1 && n > 0 ; )
    {
        if( flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 )
        {
            flowerbed[i] = 1 ;
            n-- ;
            i += 2 ;
        }
        else
            i++ ;
    }

    if( n > 0 && flowerbed[size-1] == 0 && flowerbed[size-2] == 0 )
    {
        flowerbed[size-1] = 1 ;
        n-- ;
    }

    if( n == 0 )
        return true ;

    return false ;

/*
[0,0,0,0,1]
2
[0,0,1,0,1]
1
[1]
1
[0]
1
[1,0,0]
1
[0,0,0]
1
[0,1,0]
1
[0,0,0,0]
1


*/
}
