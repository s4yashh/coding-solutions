// question link: https://leetcode.com/problems/spiral-matrix/
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> result(m * n);
        int k = 0;

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while (top <= bottom && left <= right)
        {

            // left to right
            for (int i = left; i <= right; i++)
                result[k++] = matrix[top][i];
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++)
                result[k++] = matrix[i][right];
            right--;

            // right to left
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    result[k++] = matrix[bottom][i];
                bottom--;
            }

            // bottom to top
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    result[k++] = matrix[i][left];
                left++;
            }
        }
        return result;
    }
};
