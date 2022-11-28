#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> product;
        int prod = 1;
        // Prefix
        for (int i = 0; i < nums.size(); i++)
        {
            product.push_back(prod);
            prod *= nums[i];
        }
        prod = 1;
        // Postfix
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            product[i] *= prod;
            prod *= nums[i];
        }

        return product;
    }
};