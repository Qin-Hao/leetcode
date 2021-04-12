//给你一个字符串 s，找到 s 中最长的回文子串。 
//
// 
//
// 示例 1： 
//
// 
//输入：s = "babad"
//输出："bab"
//解释："aba" 同样是符合题意的答案。
// 
//
// 示例 2： 
//
// 
//输入：s = "cbbd"
//输出："bb"
// 
//
// 示例 3： 
//
// 
//输入：s = "a"
//输出："a"
// 
//
// 示例 4： 
//
// 
//输入：s = "ac"
//输出："a"
// 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 1000 
// s 仅由数字和英文字母（大写和/或小写）组成 
// 
// Related Topics 字符串 动态规划 
// 👍 3501 👎 0


//leetcode submit region begin(Prohibit modification and deletion)

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int len = s.size();
        // 动态开辟数组
        int **dp = new int*[len]();
        for (int i = 0; i < len; ++i)
        {
            dp[i] = new int[len]();
        }

        string str(1, s[0]);
        // 边界
        for (int i = 0; i < len; ++i)
        {
            dp[i][i] = 1;

            if (i <= len - 2)
            {
                if (s[i] == s[i + 1])
                {
                    dp[i][i + 1] = 1;
                    if (str.size() != 2)
                    {
                        str = s.substr(i, 2);
                    }
                }
            }
        }
        // 状态转移方程
        for (int l = 3; l <= len; ++l) // 子串长度
        {
            for (int i = 0; i + l - 1 < len; ++i)
            {
                int j = i + l - 1; // 子串右端点
                if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
                {
                    dp[i][j] = 1;
                    if (l > str.size())
                    {
                        str = s.substr(i, l);
                    }
                }
            }
        }

        // 释放内存
        for (int i = 0; i < len; ++i)
        {
            delete [] dp[i];
        }
        delete [] dp;

        return str;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
