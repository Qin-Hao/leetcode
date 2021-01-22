/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution 
{
public:
    // 朴素解法
    // 找出所有子序列，求和，取最大值
    // 超时...
    int maxSubArray(vector<int>& nums) 
    {
        int max_sub_array = *max_element(nums.begin(), nums.end());
        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            for (auto j = i + 1; j != nums.end(); ++j)
            {
                if (max_sub_array < accumulate(i, j + 1, 0))
                {
                    max_sub_array = accumulate(i, j + 1, 0);
                }
            }
        }
        return max_sub_array;
    }

    // 动态规划
    // 时间复杂度：O(n)，其中 n为 nums 数组的长度。我们只需要遍历一遍数组即可求得答案。
    // 空间复杂度：O(1)。我们只需要常数空间存放若干变量。
    int maxSubArray(vector<int>& nums) 
    {
        int pre = 0, maxAns = nums[0];
        for (const auto &x: nums) 
        {
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
    }
};
// @lc code=end

