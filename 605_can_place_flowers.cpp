#include <bits/stdc++.h>

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        vector<int> temp;
        temp.push_back(0);
        temp.insert(temp.end(), flowerbed.begin(), flowerbed.end());
        temp.push_back(0);

        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i - 1] == 0 && temp[i] == 0 && temp[i + 1] == 0)
            {
                temp[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};