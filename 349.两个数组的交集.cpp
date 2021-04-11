/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        unordered_map<int, int> um;
        for (auto i : nums1)
        {
            ++um[i];
        }
        for (auto i : nums2)
        {
            if (um[i] != 0)
            {
                ans.push_back(i);
                um[i] = 0;
            }
        }
        return ans;
    }
};
// @lc code=end
