/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // price 里边存放的是从第 i 天起到最后一天股票价格的最大值
        vector<int> price = prices;
        for (int i = price.size() - 2; i > 0; --i)
        {
            if (price[i] < price[i + 1])
            {
                price[i] = price[i + 1];
            }
        }

        int maxInterest = 0; 、// 最大利润，如果是负的，则输出 0
        // 第 i 天买入时所能获得利润的最大值
        for (int i = 0; i < prices.size() - 1; ++i)
        {
            if (price[i + 1] - prices[i] > maxInterest)
            {
                maxInterest = price[i + 1] - prices[i];
            }
        } 

        return maxInterest;      
    }
};
// @lc code=end
