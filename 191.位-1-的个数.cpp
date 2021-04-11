/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ans = 0;
        for (int i = 0; i < 32; ++i)
        {
            uint32_t lastBit = n & (uint32_t)1;
            if (lastBit)
            {
                ++ans;
            }
            n = n >> 1;
        }
        return ans;
    }
};
// @lc code=end
