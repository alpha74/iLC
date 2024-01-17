// Check if any element's freq is same as some other element freq.
// https://leetcode.com/problems/unique-number-of-occurrences/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 9.18MB Beats9.43%of users with C++
bool uniqueOccurrences(vector<int>& arr) 
{
    vector<int> freq(2001, 0) ;
    
    for( int i = 0 ; i < arr.size() ; i++ )
        freq[arr[i] +1000 ]++ ;
    
    vector<bool> hash(1001,0);
    
    for(int i = 0 ; i < 2001 ; i++ )
    {
        if(freq[i] != 0)
        {
            if(hash[ freq[i] ] != 0)
                return false;
            hash[freq[i]] = 1;
        }
    }

    return true ;
}
