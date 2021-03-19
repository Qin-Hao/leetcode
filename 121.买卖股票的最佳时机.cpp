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
        vector<int> price = prices;
        for (int i = price.size() - 2; i > 0; --i)
        {
            if (price[i] < price[i + 1])
            {
                price[i] = price[i + 1];
            }
        }

        int maxInterest = 0;
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
