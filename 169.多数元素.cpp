/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto i : nums)
        {
            ++m[i];
        }

        int ans = 0;
        for (auto it : m)
        {
            if (it.second > nums.size() / 2)
            {
                ans = it.first;
                break;
            }
        }
        
        return ans;
    }
};
// @lc code=end
