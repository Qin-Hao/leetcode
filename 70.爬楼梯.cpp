/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution 
{
public:
    // 动态规划
    // Accepted
    // 45/45 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 98.11 % of cpp submissions (5.8 MB)
    int climbStairs(int n) 
    {
        int p = 0, q = 0, r = 1;
        for (int i = 1; i <= n; ++i) 
        {
            p = q; 
            q = r; 
            r = p + q;
        }
        return r;
    }
};
// @lc code=end

