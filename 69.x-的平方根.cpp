/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution
{
public:
    // 二分法
    // 时间复杂度：O(log x)，即为二分查找需要的次数
    // 空间复杂度：O(1)
    // Accepted
    // 1017/1017 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 45.99 % of cpp submissions (6.2 MB)
    int mySqrt(int x)
    {
        int left = 0, right = 46340, mid, ans = -1; // 为什么是46340？因为INT_MAX的平方根是46340.xxxx
        while (left <= right)
        {
            mid = (left + right) / 2;
            if ((long long)mid * mid <= x)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
