#include <bits/stdc++.h>

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> mp1, mp2;
        string temp = "balloon";
        for (auto c : temp)
        {
            mp1[c]++;
        }

        for (auto c : text)
        {
            mp2[c]++;
        }

        vector<int> result;
        temp = "balon";
        for (auto k : temp)
        {
            if (mp1.find(k) != mp1.end())
            {
                result.push_back(mp2[k] / mp1[k]);
            }
        }
        int count = INT_MAX;
        for (auto n : result)
        {
            count = min(count, n);
        }
        return count;
    }
};