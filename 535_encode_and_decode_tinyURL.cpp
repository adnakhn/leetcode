#include <bits/stdc++.h>

class Solution
{
public:
    unordered_map<string, string> encodeURL, decodeURL;
    string baseUrl = "http://tinyurl.com/";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        if (encodeURL.find(longUrl) == encodeURL.end())
        {
            string shortUrl = baseUrl + to_string(longUrl.length() + 1);
            encodeURL[longUrl] = shortUrl;
            decodeURL[shortUrl] = longUrl;
        }
        return encodeURL[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return decodeURL[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));