/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(); // 元素个数
        if (len == 0 || len == 1) return len;
        int delNum = 0; // 被删除的元素个数
        for (int i = 0; i < len - 1; ++i) {
            while (nums[i] == nums[i + 1] && i + 1 <= len - 1) {
                ++delNum;
                for (int j = i; j < len - 1; ++j) {
                    nums[j] = nums[j + 1];
                }
                --len;
                if (len == 1) return len;
            }
        }
        return nums.size() - delNum;
    }
};
// @lc code=end

