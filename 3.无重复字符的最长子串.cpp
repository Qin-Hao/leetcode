/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // 空串
        if (s.size() <= 1)
        {
            return s.size();
        }

        int ans = 0;
        unordered_map<char, int> um;
        int i = 0, j = 0;
        while (j <= s.size() - 1)
        {
            if (um[s[j]] == 0)
            {
                ++um[s[j]];
                ++j;

                if (j - i > ans)
                {
                    ans = j - i;
                }
            }
            else
            {
                if (j - i > ans)
                {
                    ans = j - i;
                }

                while (s[i] != s[j])
                {
                    um.erase(um.find(s[i]));
                    ++i;
                }
                um.erase(um.find(s[i]));
                ++i;
            }
        }

        return ans;
    }
};
// @lc code=end
