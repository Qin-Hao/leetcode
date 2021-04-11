/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> um;
        for (auto ch : s)
        {
            ++um[ch];
        }

        char ch = ' ';
        for (auto it : um)
        {
            if (it.second == 1)
            {
                ch = it.first;
            }
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == ch)
            {
                return i;
            }
        }

        return -1;
    }
};
// @lc code=end
