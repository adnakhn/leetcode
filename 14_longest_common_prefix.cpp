#include <bits/stdc++.h>

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = strs[0];

        for (int i = 1; i < strs.size(); i++)
        {
            res = updateCommonPrefix(res, strs[i]);
        }
        return res;
    }
    string updateCommonPrefix(string res, string str)
    {
        string temp = "";
        int index = 0;
        while (index < res.size() && index < str.size())
        {
            if (res[index] != str[index])
            {
                break;
            }
            else
            {
                temp += res[index];
                index++;
            }
        }
        return temp;
    }
};