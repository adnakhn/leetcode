#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        // unordered_map<int, int> map;
        // for(int i=0; i<nums1.size(); i++){
        //     map[nums1[i]] = i;
        // }
        // sort(nums1.begin(), nums1.end());

        // vector<int> result(nums1.size(), -1);
        // for(int i=0; i<nums2.size(); i++){
        //     if(binary_search(nums1.begin(), nums1.end(), nums2[i])){

        //         for(int j=i+1; j<nums2.size(); j++){
        //             if(nums2[j]>nums2[i]){
        //                 result[map[nums2[i]]] = nums2[j];
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return result;

        unordered_map<int, int> map;
        for (int i = 0; i < nums1.size(); i++)
        {
            map[nums1[i]] = i;
        }
        stack<int> s;
        vector<int> result(nums1.size(), -1);
        for (int i = 0; i < nums2.size(); i++)
        {
            while (!s.empty() && nums2[i] > s.top())
            {
                int val = s.top();
                s.pop();
                result[map[val]] = nums2[i];
            }
            if (map.find(nums2[i]) != map.end())
            {
                s.push(nums2[i]);
            }
        }
        return result;
    }
};