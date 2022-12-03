#include <bits/stdc++.h>

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // sort(nums.begin(), nums.end());
        // vector<int> bucket(3, 0);
        // for(auto n: nums){
        //     n == 0 ? bucket[0]++ : n==1 ? bucket[1]++ : bucket[2]++;
        // }
        // int i=0;
        // while(bucket[0]>0){
        //     nums[i++] = 0;
        //     bucket[0]--;
        // }
        // while(bucket[1]>0){
        //     nums[i++] = 1;
        //     bucket[1]--;
        // }
        // while(bucket[2]>0){
        //     nums[i++] = 2;
        //     bucket[2]--;
        // }
        int l = 0, i = 0, r = nums.size() - 1;
        while (i <= r)
        {
            if (nums[i] == 0)
            {
                swap(nums[l++], nums[i++]);
            }
            else if (nums[i] == 1)
            {
                i++;
            }
            else if (nums[i] == 2)
            {
                swap(nums[i], nums[r--]);
            }
        }
    }
};