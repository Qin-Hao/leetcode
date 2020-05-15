/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if (s == "") return true; // 空串，有效
        if (s.size() % 2 == 1) return false; // 奇数个肯定不对
        int snum = 0, mnum = 0, bnum = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                --snum;
            }
            if (s[i] == ')') {
                ++snum;
            }
            if (s[i] == '[') {
                --mnum;
            }
            if (s[i] == ']') {
                ++mnum;
            }
            if (s[i] == '{') {
                --bnum;
            }
            if (s[i] == '}') {
                ++bnum;
            }
        }
        if (snum != 0 || bnum != 0 || mnum != 0) return false; // 左括号数 != 右括号数
        // 三种括号，左括号数 = 右括号数
        bool *flag = new bool[s.size()]; // 动态分配
        for (int i = 0; i < s.size(); ++i) {
            flag[i] = false;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                for (int j = 1; i + j < s.size(); j = j + 2) { // 寻找）
                    if (s[i + j] == ')') {
                        flag[i] = true;
                        flag[i + j] = true;
                        break;
                    }
                }
                if (flag[i] == false) return false;
            }
            if (s[i] == '[') {
                for (int j = 1; i + j < s.size(); j = j + 2) { // 寻找]
                    if (s[i + j] == ']') {
                        flag[i] = true;
                        flag[i + j] = true;
                        break;
                    }
                }
                if (flag[i] == false) return false;
            }
            if (s[i] == '{') {
                for (int j = 1; i + j < s.size(); j = j + 2) { // 寻找}
                    if (s[i + j] == '}') {
                        flag[i] = true;
                        flag[i + j] = true;
                        break;
                    }
                }
                if (flag[i] == false) return false;
            }
        }
        bool ans = true;
        for (int i = 0; i < s.size(); ++i) {
            if (!flag[i]) ans = false;
            break;
        }
        delete [] flag; // 释放内存
        return ans;
    }
};
// @lc code=end

