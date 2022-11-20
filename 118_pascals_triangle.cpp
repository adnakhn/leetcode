#include <bitstdc++.h>

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        result.push_back({1});
        for (int i = 1; i < numRows; i++)
        {
            vector<int> temp;
            temp.push_back(0);
            temp.insert(temp.end(), result[i - 1].begin(), result[i - 1].end());
            temp.push_back(0);
            vector<int> row;
            for (int j = 0; j < i + 1; j++)
            {
                row.push_back(temp[j] + temp[j + 1]);
            }
            result.push_back(row);
        }
        return result;
    }
};