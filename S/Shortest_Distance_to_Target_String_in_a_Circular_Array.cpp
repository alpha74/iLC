// Return shortest distance to target string in a circular array
// https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/description/
// Aman Kumar

// Runtime 28 ms Beats 89.77%
// Memory 14.7 MB Beats 60.88%
int getMin(int &startIndex, int targetIndex, int n)
{
    int left = 0 ;

    if(startIndex >= targetIndex)
        left = startIndex - targetIndex ;
    else
        left = (startIndex - 0) + (n- targetIndex) ;

    int right = 0 ;

    if(startIndex <= targetIndex)
        right = targetIndex - startIndex ;
    else
        right = (n - startIndex -1 ) + targetIndex ;

    return min(left, right) ;
}

int closetTarget(vector<string>& words, string target, int startIndex) 
{
    bool exist = false ;
    int ret = INT_MAX ;

    for(int i = 0 ; i < words.size() ; i++)
    {
        if(words[i] == target)
        {
            exist = true ;
            ret = min(ret, getMin(startIndex, i, words.size())) ;
        }
    }    

    if(!exist)
        return -1 ;

    return ret ;
}
