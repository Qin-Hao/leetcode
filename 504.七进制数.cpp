/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        string str;
        bool flag = false; // 判断是否是负数
        if (num < 0) {
            flag = true;
            num = -num;
        }
        // 除基取余
        do {
            str += to_string(num % 7);
            num /= 7;
        } while (num != 0);
        // 反转
        string ans(str.rbegin(), str.rend());
        // 负数前面加“-”
        if (flag) {
            ans = "-" + ans;
        }
        return ans;
    }
};
// @lc code=end

