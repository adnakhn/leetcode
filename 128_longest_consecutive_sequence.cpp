#include <bits/stdc++.h>

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> s;
        for (auto n : nums)
        {
            s.insert(n);
        }
        int count = 0;
        for (auto n : nums)
        {
            int length;
            if (s.find(n - 1) == s.end())
            {
                length = 0;
                while (s.find(n + length) != s.end())
                {
                    length++;
                }
                count = max(length, count);
            }
        }
        return count;
    }
};