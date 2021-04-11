/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (int i : nums)
        {
            ++m[i];
        }

        int ans = 0;
        for (auto it : m)
        {
            if (it.second == 1)
            {
                ans = it.first;
            }
        }
        
        return ans;
    }
};
// @lc code=end
