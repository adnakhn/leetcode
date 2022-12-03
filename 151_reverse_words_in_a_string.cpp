#include <bits/stdc++.h>

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        string temp = "";
        for (auto c : s)
        {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            {
                temp += c;
            }
            else
            {
                if (temp.length() > 0)
                {
                    words.push_back(temp);
                }
                temp = "";
            }
        }
        if (temp.length() > 0)
        {
            words.push_back(temp);
        }

        string result = words[words.size() - 1];

        for (int i = words.size() - 2; i >= 0; i--)
        {
            result += " " + words[i];
        }

        return result;
    }
};