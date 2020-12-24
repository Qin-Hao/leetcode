/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include <iostream>
class Solution 
{
public:
    // 时间复杂度：O(log(x))，x中大约有log_{10}(x)位数字。
    // 空间复杂度：O(1)
    // Accepted
    // 1032/1032 cases passed (4 ms)
    // Your runtime beats 52.58 % of cpp submissions
    // Your memory usage beats 39.52 % of cpp submissions (6.2 MB)
    int reverse(int x) 
    {
        int rev = 0;
        while (x != 0) 
        {
            int pop = x % 10;
            x /= 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
// @lc code=end