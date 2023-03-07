// Set two zeros in place of one zero by shifting elements to right. Maintain original array size
// https://leetcode.com/problems/duplicate-zeros/description/
// Aman Kumar

// Runtime 3 ms Beats 95.73%
// Memory 10 MB Beats 26.8%
void duplicateZeros(vector<int>& arr) 
{
    vector<int> ret( arr.size(), 0 );
    int j = 0 ;

    for( int i = 0 ; i < arr.size() && j < arr.size() ; i++ )
    {
        if( arr[i] == 0 )
        {
            ret[j++] = 0 ;

            if( j < arr.size() )
                ret[j++] = 0 ;
        }
        else
            ret[j++] = arr[i] ;
    }

    arr = ret ;  
}
