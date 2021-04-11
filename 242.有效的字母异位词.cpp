/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> ums, umt;
        for (int i = 0; i < s.size(); ++i)
        {
            ++ums[s[i]];
            ++umt[t[i]];
        }
        for (auto ch : s)
        {
            if (ums[ch] != umt[ch])
            {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end
