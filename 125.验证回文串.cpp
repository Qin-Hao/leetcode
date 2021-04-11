/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        // 空串
        if (s.size() == 0) 
        {
            return true;
        }

        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (isalnum(s[i]))
            {
                if (isalnum(s[j]))
                {
                    if (tolower(s[i]) == tolower(s[j]))
                    {
                        ++i;
                        --j;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    --j;
                }
            }
            else
            {
                ++i;
            }
        }
        return true;
    }
};
// @lc code=end
