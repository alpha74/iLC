// Return most popular video creator with video id
// https://leetcode.com/problems/most-popular-video-creator/description/
// Aman Kumar

// Runtime 2367 ms Beats 5.6%
// Memory 520.2 MB Beats 5.6%

class VideoStats
{
    public:
        string id ;
        int views ;

        VideoStats()
        {
            id = "" ;
            views = 0 ;
        }

        VideoStats(string s, int v)
        {
            id = s ;
            views = v ;
        }
} ;

bool sortStr(string a, string b)
{
    if(a.length() == b.length())
        return a < b ;

    for(int i = 0 ; i < min(a.length(), b.length()) ; i++ )
    {
        if(a[i] == b[i])
            continue ;
        
        return a[i] < b[i] ;
    }

    return a.length() <= b.length() ;
}

bool sortRet(vector<string> a, vector<string> b)
{
    return sortStr(a[0], b[0]) ;
}

bool sortVideoStats(VideoStats a, VideoStats b)
{
    if(a.views > b.views)
        return true ;
    
    else if(a.views < b.views)
        return false ;
    
    return sortStr(a.id, b.id);
}

class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) 
    {
        // <creator, total_views>
        // <creator, [ list of videos sorted by higher views and lower ids ]>    

        unordered_map<string,unsigned long long> creatorViews ;
        unordered_map<string,vector<VideoStats>> creatorVideos ;

        int n = creators.size() ;
        unsigned long long maxViews = 0 ;

        for(int i = 0 ; i < n ; i++)
        {
            creatorViews[ creators[i] ] += views[i] ;
            VideoStats videoStats(ids[i], views[i]) ;
            creatorVideos[ creators[i] ].push_back( videoStats ) ;

            if(creatorViews[ creators[i] ] > maxViews)
                maxViews = creatorViews[ creators[i] ] ;
        }

        // Find all creators having maxViews
        vector<vector<string>> ret ;

        for(auto it = creatorViews.begin() ; it != creatorViews.end() ; it++)
        {
            sort( creatorVideos[ it -> first].begin(), creatorVideos[ it -> first ].end(), sortVideoStats) ;
            if( it -> second == maxViews)
                ret.push_back({ it -> first, creatorVideos[ it-> first ][0].id }) ;
        }

        sort(ret.begin(), ret.end(), sortRet) ;

        return ret ;
    }
};
