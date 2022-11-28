#include <bits/stdc++.h>

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        const int cnt = 9;
        bool row[cnt][cnt] = {false};
        bool col[cnt][cnt] = {false};
        bool squares[cnt][cnt] = {false};

        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] == '.')
                {
                    continue;
                }
                int idx = board[r][c] - '0' - 1;
                int area = (r / 3) * 3 + (c / 3);
                if (row[r][idx] || col[c][idx] || squares[area][idx])
                {
                    return false;
                }
                row[r][idx] = true;
                col[c][idx] = true;
                squares[area][idx] = true;
            }
        }
        return true;
    }
};