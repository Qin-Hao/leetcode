/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int length = nums.size();
        int sum = 0;
        int numsSum = 0;
        for (int i = 0; i <= length; ++i)
        {
            sum += i;
            if (i <= length - 1)
            {
                numsSum += nums[i];
            }
        }
        return sum - numsSum;
    }
};
// @lc code=end
