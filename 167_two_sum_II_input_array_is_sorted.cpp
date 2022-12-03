#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int start = 0, end = numbers.size() - 1;
        vector<int> result;
        while (start < end)
        {
            if (target < numbers[start] + numbers[end])
            {
                end--;
            }
            else if (target > numbers[start] + numbers[end])
            {
                start++;
            }
            else
            {
                result.push_back(start + 1);
                result.push_back(end + 1);
                break;
            }
        }
        return result;
    }
};