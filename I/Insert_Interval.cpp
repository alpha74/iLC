// Interval given new interval into sorted interval list such that end result is sorted on start value.
// https://leetcode.com/problems/insert-interval/description
// Aman Kumar

// Runtime 8ms Beats81.77%of users with C++
// Memory 20.44MB Beats58.08%of users with C++
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
{
    vector<vector<int>> ret;

    int start = newInterval[0], end = newInterval[1];
    bool inserted = false;

    for(int i = 0 ; i < intervals.size() ; i++)
    {
        // Current interval start and end
        int cstart = intervals[i][0], cend = intervals[i][1];

        // If end of curr interval is < start of new interval, push the curr interval
        if(cend < start || inserted)
        {
            ret.push_back({cstart, cend});
            continue;
        }
        // else, there is some overlap 
        start = min(start, cstart);

        if(end < cstart)
        {
            ret.push_back({start, end});
            ret.push_back({cstart, cend});

            inserted = true;
            continue;
        }

        if(end <= cend)
        {
            ret.push_back({start, cend});
            inserted = true;
        }
    }

    if(!inserted)
        ret.push_back({start, end});

    return ret;
}
