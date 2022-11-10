#include <bits/stdc++.h>

class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        int i = 0;
        for (i = 0; i < s.size();)
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V' || s[i + 1] == 'X')
                {
                    ans += (returnDigit(s[i + 1]) - returnDigit(s[i]));
                    i += 2;
                }
                else
                {
                    ans += returnDigit(s[i]);
                    i++;
                }
            }
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L' || s[i + 1] == 'C')
                {
                    ans += (returnDigit(s[i + 1]) - returnDigit(s[i]));
                    i += 2;
                }
                else
                {
                    ans += returnDigit(s[i]);
                    i++;
                }
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                {
                    ans += (returnDigit(s[i + 1]) - returnDigit(s[i]));
                    i += 2;
                }
                else
                {
                    ans += returnDigit(s[i]);
                    i++;
                }
            }
            else
            {
                ans += returnDigit(s[i]);
                i++;
            }
        }

        return ans;
    }

    int returnDigit(char c)
    {
        int num = 0;
        switch (c)
        {
        case 'I':
            num = 1;
            break;
        case 'V':
            num = 5;
            break;
        case 'X':
            num = 10;
            break;
        case 'L':
            num = 50;
            break;
        case 'C':
            num = 100;
            break;
        case 'D':
            num = 500;
            break;
        case 'M':
            num = 1000;
            break;
        }
        return num;
    }
};