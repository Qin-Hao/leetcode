/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    // 进制转换问题 26进制 --> 10进制
    int titleToNumber(string s)
    {
        int ans = 0;
        unordered_map<char, int> m;
        for (int i = 0; i < 26; ++i)
        {
            m['A' + i] = i + 1;
        }
        for (int j = 0; j < s.size(); ++j)
        {
            ans *= 26;
            ans += m[s[j]];
        }
        return ans;
    }
};
// @lc code=end
