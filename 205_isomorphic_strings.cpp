#include <bits/stdc++.h>

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mpST, mpTS;
        for (int i = 0; i < s.length(); i++)
        {
            if (mpST.find(s[i]) != mpST.end())
            {
                if (mpST[s[i]] != t[i])
                {
                    return false;
                }
            }
            if (mpTS.find(t[i]) != mpTS.end())
            {
                if (mpTS[t[i]] != s[i])
                {
                    return false;
                }
            }
            mpST[s[i]] = t[i];
            mpTS[t[i]] = s[i];
        }
        return true;
    }
};