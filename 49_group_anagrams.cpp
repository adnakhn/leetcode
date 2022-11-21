#include <bits/stdc++.h>

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        for (auto s : strs)
        {
            string key = getKey(s);
            map[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto k : map)
        {
            result.push_back(k.second);
        }
        return result;
    }

private:
    string getKey(string s)
    {
        vector<int> count(26);
        for (auto c : s)
        {
            count[c - 'a']++;
        }
        string key = "";
        for (int i = 0; i < 26; i++)
        {
            key.append(to_string(count[i] + 'a'));
        }
        return key;
    }
};