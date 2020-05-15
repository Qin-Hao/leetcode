/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return ""; // 空的
        if (strs.size() == 1) return strs[0]; // 只有一个
        // 至少有两个string
        int minStr = 0; // 最短的字符串
        int minLen = strs[0].size(); // 最短长度
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].size() < minLen) {
                minStr = i;
                minLen = strs[i].size();
            }
        }

        string ans;
        for (int i = 0; i < minLen; ++i) {
            for (int j = 0; j < strs.size(); ++j) {
                if (strs[j][i] != strs[minStr][i]) {
                    return ans;
                }
            }
            ans += strs[minStr][i];
        }
        return ans;
    }
};
// @lc code=end

