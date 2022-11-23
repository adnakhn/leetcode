#include <bits/stdc++.h>

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int index = -1;
        int leftSum = 0, rightSum = 0, totalSum = 0;
        for (auto n : nums)
        {
            totalSum += n;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            rightSum = totalSum - leftSum - nums[i];

            if (rightSum == leftSum)
            {
                index = i;
                break;
            }
            leftSum += nums[i];
        }
        return index;
    }
};