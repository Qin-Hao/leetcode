/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution 
{
public:
    // 朴素解法
    // 时间复杂度 O(n)，n 为数组长度
    // 空间复杂度 O(1)
    // Accepted
    // 114/114 cases passed (4 ms)
    // Your runtime beats 64.52 % of cpp submissions
    // Your memory usage beats 63.89 % of cpp submissions (9 MB)
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry = 1; // 进位
        auto p = digits.end() - 1;
        while (carry)
        {
            *p = *p + carry;
            carry = 0;
            if (*p == 10) // 需要进位
            {
                *p = 0;
                if (p == digits.begin()) // 最高位
                {
                    digits.insert(p, 1);
                    return digits;
                }
                carry = 1;
                --p;
            }
        }
        return digits;
    }
};
// @lc code=end
