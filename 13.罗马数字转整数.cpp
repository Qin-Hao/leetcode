/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <string>
#include <unordered_map>
using namespace std;
class Solution 
{
public:
    // 暴力解法
    // 时间复杂度 O(s_len)
    /// 空间复杂度 O(1)
    int romanToInt(string s) 
    {
        int rom = 0;
        int len = s.size();
        // 建立字母到数字的映射
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        // 转换为整数
        for (int i = 0; i < len;)
        {
            if (m[s[i]] < m[s[i + 1]])
            {
                rom += m[s[i + 1]] - m[s[i]];
                i = i + 2;
            }
            else
            {
                rom += m[s[i]];
                ++i;
            } 
        }
        return rom;
    }
};
// @lc code=end