/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    // 欧拉筛法
    int countPrimes(int n)
    {
        if (n < 2) 
        {
            return 0;
        }
        vector<bool> isPrimes(n, true);
        vector<int> prime;
        for (int i = 2; i <= n - 1; ++i)
        {
            if (isPrimes[i] == true)
            {
                prime.push_back(i);
            }
            for (int j = 0; j < prime.size() && i * prime[j] <= n - 1; ++j)
            {
                isPrimes[i * prime[j]] = false;
                if (i % prime[j] == 0)
                {
                    break;
                }
            }
        }
        return prime.size();
    }
};
// @lc code=end
