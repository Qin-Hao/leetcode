/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <string>
#include <stack>
#include <unordered_map> 
using namespace std;
class Solution 
{
public:
    // 借助栈的解法
    // 时间复杂度 O(s_len)
    // 空间复杂度 O(s_len)
    // Accepted
    // 91/91 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 5.15 % of cpp submissions (6.9 MB)
    bool isValid(string s) 
    {
        if (!s.size()) return true; // 空串，有效
        unordered_map<char, int> mp;
        mp['('] = 1;
        mp['['] = 2;
        mp['{'] = 3;
        mp[')'] = -1;
        mp[']'] = -2;
        mp['}'] = -3;
        stack<int> sk;
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            if (mp[s[i]] > 0) sk.push(mp[s[i]]);
            else
            {
                if (sk.size() == 0) return false; // 右括号剩余
                int temp = sk.top();
                sk.pop();
                if (temp + mp[s[i]] != 0) return false; // 括号不匹配
            }
        }
        if (sk.size() > 0) return false; // 左括号剩余
        return true;
    }
};
// @lc code=end

