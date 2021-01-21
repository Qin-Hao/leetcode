/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution 
{
public:
    // two pointers
    // Accepted
    // 59/59 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 99.61 % of cpp submissions (8.6 MB)
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int merged[m + n]; // result
        int pm = 0, pn = 0; // two pointers
        int cur = 0; // point to array merged
        while (pm < m || pn < n)
        {
            if (pm == m)
            {
                merged[cur++] = nums2[pn++];
            }
            else if (pn == n)
            {
                merged[cur++] = nums1[pm++];
            }
            else if (nums1[pm] < nums2[pn])
            {
                merged[cur++] = nums1[pm++];
            }
            else if (nums1[pm] == nums2[pn])
            {
                merged[cur++] = nums1[pm++];
                merged[cur++] = nums2[pn++];
            }
            else if (nums1[pm] > nums2[pn])
            {
                merged[cur++] = nums2[pn++];
            }
        }
        for (int i = 0; i < m + n; ++i)
        {
            nums1[i] = merged[i];
        }
    }
};
// @lc code=end

