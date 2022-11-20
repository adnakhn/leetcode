#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int new_max = -1;
        for (int i = arr.size() - 2; i >= 0; i--)
        {
            int temp = arr[i];
            arr[i] = max(arr[i + 1], new_max);
            new_max = max(temp, new_max);
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};