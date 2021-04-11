/*
 * @lc app=leetcode.cn id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ans;
        for (int i = 1; i <= n; ++i)
        {
            string str;

            if (i % 3 != 0 && i % 5 != 0)
            {
                str += to_string(i);
            }

            if (i % 3 == 0)
            {
                str += "Fizz";
            }
            if (i % 5 == 0)
            {
                str += "Buzz";
            }

            ans.push_back(str);
        }
        return ans;
    }
};
// @lc code=end
