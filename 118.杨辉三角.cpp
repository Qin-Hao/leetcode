/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        // 初始化二维数组
        vector<vector<int>> triangle(numRows);
        for (int i = 0; i < numRows; ++i)
        {
            triangle[i].resize(i + 1);
        }

        for (int i = 0; i < numRows; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                if (j == 0 || j == i)
                {
                    triangle[i][j] = 1;
                }
                else
                {
                    triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
            }
        }
        return triangle;
    }
};
// @lc code=end
