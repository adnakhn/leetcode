#include <bits/stdc++.h>

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // unordered_map<int, int> mp;
        // int result = 0;
        // for(auto n: nums){
        //     mp[n]++;
        // }
        // for(auto k: mp){
        //     if(k.second > floor(nums.size()/2)){
        //         result = k.first;
        //     }
        // }
        // return result;
        int res = 0, cnt = 0;
        for (auto n : nums)
        {
            if (cnt == 0)
            {
                res = n;
            }
            cnt += (n == res ? 1 : -1);
        }
        return res;
    }
};