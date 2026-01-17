// question link: https://leetcode.com/problems/maximum-area-of-square-hole-in-grid/
// approach: sort the horizontal and vertical bars, find the maximum gap between consecutive bars in
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximizeSquareHoleArea(int n, int m, vector<int> &hBars, vector<int> &vBars)
    {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());

        int maxH = maxGap(hBars);
        int maxV = maxGap(vBars);

        int side = min(maxH, maxV);
        return side * side;
    }

private:
    int maxGap(vector<int> &bars)
    {
        int maxLen = 1, curr = 1;

        for (int i = 1; i < bars.size(); i++)
        {
            if (bars[i] == bars[i - 1] + 1)
                curr++;
            else
                curr = 1;

            maxLen = max(maxLen, curr);
        }
        return maxLen + 1; // +1 for merged cells
    }
};
