/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < 10; ++i)
        {
            m[i] = i * i;
        }
        int oldN = n;
        int newN = n;
        int cnt = 0; // 循环次数
        while (newN != 1)
        {
            if (++cnt > 100000) return false;
            oldN = newN;
            newN = 0;
            while (oldN != 0)
            {
                newN += m[oldN % 10];
                oldN /= 10;
            }
        }
        return true;
    }
};
// @lc code=end
