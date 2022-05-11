// Check if change is possible for lemonade buy.
// https://leetcode.com/problems/lemonade-change/
// Aman Kumar

bool lemonadeChange(vector<int>& bills) 
{
    int five = 0, ten = 0, twenty = 0 ;

    bool ret = true ;

    for( int i = 0 ; i < bills.size() && ret ; i++ )
    {
        if( bills[i] == 5 )
            five++ ;

        else if( bills[i] == 10 )
        {
            // Check if change possible
            if( five > 0 )
            {
                five-- ;
                ten++ ;
            }
            else
                ret = false ;
        }
        else // 20 
        {
            // Check if change possible with 1 ten and 1 five
            if( ten > 0 && five > 0 )
            {
                ten-- ;
                five-- ;
                twenty++ ;
            }
            else if( five > 2 )      // only with 5
                five -= 3 ;
            else
                ret = false ;
        }
    }

    return ret ;
}
