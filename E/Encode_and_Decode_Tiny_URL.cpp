// Encode and decode tinyURL
// https://leetcode.com/problems/encode-and-decode-tinyurl/description/
// Aman Kumar

// Runtime 0ms Beats100.00%
// Memory 10.77MB Beats19.58%
class Solution {
public:
    int counter = 0;

    unordered_map<string,string> hash;
    unordered_map<string,string> rhash;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) 
    {
        string key = to_string(counter);
        
        hash[longUrl] = key;
        rhash[key] = longUrl;  
        counter++ ; 
        return key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        return rhash[shortUrl];
    }
};
