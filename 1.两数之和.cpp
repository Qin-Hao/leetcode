/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    // 暴力枚举
    // 时间复杂度 O(n^2)
    // 空间复杂度 O(1)
    // vector<int> twoSum(vector<int>& nums, int target) 
    // {
    //     int len = nums.size();
    //     for (int i = 0; i < len; ++i)
    //     {
    //         for (int j = i + 1; j < len; ++j)
    //         {
    //             if (nums[i] + nums[j] == target)
    //             {
    //                 return vector<int>{i, j};
    //             }
    //         }
    //     }
    //     return vector<int>{};
    // }

    // 哈希表
    // 时间复杂度 O(n)
    // 空间复杂度 O(n)
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> hashtable; // unordered_map比map效率高，这里不需要排序
        int len = nums.size();
        for (int i = 0; i < len; ++i) 
        {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) 
            {
                return vector<int>{it->second, i}; // 考虑出现的先后
            }
            hashtable[nums[i]] = i;
        }
        return vector<int>{};
    }
};
// @lc code=end