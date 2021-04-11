/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> um;
        for (auto i : nums1)
        {
            ++um[i];
        }

        vector<int> ans;
        for (auto j : nums2)
        {
            if (um[j] != 0)
            {
                ans.push_back(j);
                --um[j];
            }
        }

        return ans;
    }
};
// @lc code=end
