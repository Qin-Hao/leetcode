/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution 
{
public:
    // 双指针法
    // 时间复杂度：O(n)，假设数组的长度是 n，那么 i 和 j 分别最多遍历 n 步。
    // 空间复杂度：O(1)
    // Accepted
    // 161/161 cases passed (20 ms)
    // Your runtime beats 68.57 % of cpp submissions
    // Your memory usage beats 55.96 % of cpp submissions (13.6 MB)
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); ++j) 
        {
            if (nums[j] != nums[i]) 
            {
                ++i;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
// @lc code=end

