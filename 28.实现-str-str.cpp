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
    int strStr(string haystack, string needle) 
    {
        if(needle.empty()) return 0;
        int pos = haystack.find(needle);
        return pos;
    }
};
// @lc code=end

