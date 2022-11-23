#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        // unordered_map<int, int> map;
        // vector<int> result;
        // for(auto n: nums){
        //     map[n]++;
        // }
        // for(int i=1; i<=nums.size(); i++){
        //     if(map[i]==0){
        //         result.push_back(i);
        //     }
        // }
        // return result;
        vector<int> result;
        int i = 0;
        for (auto n : nums)
        {
            i = abs(n) - 1;
            nums[i] = -1 * abs((nums[i]));
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};