#include <bits/stdc++.h>

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.length() - 1, length = 0;
        while (s[i] == ' ' && i >= 0)
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            length++;
            i--;
        }
        return length;
    }
};