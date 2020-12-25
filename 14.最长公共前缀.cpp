/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution 
{
public:
    // 纵向扫描
    // 时间复杂度 O(mn) 其中 m 是字符串数组中的字符串的平均长度，n 是字符串的数量。
    // 空间复杂度 O(1)
    // Accepted
    // 123/123 cases passed (4 ms)
    // Your runtime beats 92.96 % of cpp submissions
    // Your memory usage beats 46.38 % of cpp submissions (9.4 MB)
    string longestCommonPrefix(vector<string>& strs) 
    {
        string comm = "";
        if (!strs.size()) return comm; // 若strs为空，直接返回空串
        int strs_len = strs.size();
        int str_min_len = strs[0].size();
        for (int i = 1; i < strs_len; ++i)
        {
            if (strs[i].size() < str_min_len) str_min_len = strs[i].size();
        }
        for (int i = 0; i < str_min_len; ++i)
        {
            for (int j = 1; j < strs_len; ++j)
            {
                if (strs[j][i] != strs[0][i]) return comm;
            }
            comm += strs[0][i];
        }
        return comm;
    }
};
// @lc code=end
