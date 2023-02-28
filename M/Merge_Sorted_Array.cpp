// Merge two sorted array in first one(space allocated)
// https://leetcode.com/problems/merge-sorted-array/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 9 MB Beats 92.2%
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int u = m+n-1 ;

    int p1 = m-1, p2 = n-1 ;

    for( ; p1 >= 0 && p2 >= 0 ; )
    {
        if( nums1[ p1 ] > nums2[ p2 ] )
        {
            nums1[ u ] = nums1[ p1 ] ;
            u-- ;
            p1-- ;
        }
        else if( nums2[ p2 ] > nums1[ p1 ] )
        {
            nums1[ u ] = nums2[ p2 ] ;
            p2-- ;
            u-- ;
        }
        else
        {
            nums1[ u ] = nums1[ p1 ] ;
            u-- ;

            nums1[ u ] = nums1[ p1 ] ;
            p1-- ;
            p2-- ;
            u-- ;
        }
    }



    for( ; p1 >= 0 ; )
    {
        nums1[u] = nums1[p1] ;
        u-- ;
        p1-- ;
    }
    for( ; p2 >= 0 ; )
    {
        nums1[u] = nums2[p2] ;
        u-- ;
        p2-- ;
    }

}
