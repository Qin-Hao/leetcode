/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;

            ++i;
            --j;
        }
    }
};
// @lc code=end
