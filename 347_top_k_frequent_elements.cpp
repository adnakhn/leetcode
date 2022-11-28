#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        vector<int> result;
        for (auto n : nums)
        {
            mp[n]++;
        }
        vector<vector<int>> count(nums.size() + 1);
        for (auto t : mp)
        {
            count[t.second].push_back(t.first);
        }
        for (int i = nums.size(); i >= 0; i--)
        {
            if (result.size() >= k)
            {
                break;
            }
            if (!count[i].empty())
            {
                result.insert(result.end(), count[i].begin(), count[i].end());
            }
        }

        return result;
    }
};