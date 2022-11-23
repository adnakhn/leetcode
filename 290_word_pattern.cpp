#include <bits/stdc++.h>

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {

        unordered_map<char, string> mPatString;
        unordered_map<string, char> mStringPat;

        vector<string> strings;
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c != ' ')
            {
                temp += c;
            }
            else
            {
                strings.push_back(temp);
                temp = "";
            }
        }
        strings.push_back(temp);
        if (strings.size() != pattern.length())
        {
            return false;
        }
        for (int i = 0; i < strings.size(); i++)
        {
            if ((mPatString.find(pattern[i]) != mPatString.end()) && (mPatString[pattern[i]] != strings[i]))
            {
                return false;
            }
            if ((mStringPat.find(strings[i]) != mStringPat.end()) && (mStringPat[strings[i]] != pattern[i]))
            {
                return false;
            }
            mPatString[pattern[i]] = strings[i];
            mStringPat[strings[i]] = pattern[i];
        }
        return true;
    }
};