/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include <string>
using namespace std;
class Solution 
{
public:
    // 直接使用库函数
    // Accepted
    // 78/78 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 41.4 % of cpp submissions (7.1 MB)
    int strStr(string haystack, string needle) 
    {
        if(needle.empty()) return 0;
        int pos = haystack.find(needle);
        return pos;
    }
};
// @lc code=end

