/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution
{
public:
    // 0 的个数等于 5 的个数 
    int trailingZeroes(int n)
    {
        int zeroCount = 0;
        while (n > 0)
        {
            n /= 5;
            zeroCount += n;
        }
        return zeroCount;
    }
};
// @lc code=end
