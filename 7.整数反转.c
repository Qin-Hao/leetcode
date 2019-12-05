/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x)
{
    int nums[10] = {0};
    int count = 0;
    int i = 0, j = 0;  // counter
    int signal = 0; // 默认正数
    int ans = 0;

    if (x < 0)
    {
        if (x == -2147483648)
        {
            return 0;
        }
        else
        {
            x = -x;
            signal = 1;
        }
    }

    while (x >= 10)  // EX: 123456789 --> 987654321
    {
        nums[i] = x % 10;
        x = x / 10;
        ++i;
    }
    nums[i] = x;

    if (i == 9)    // 可能溢出的情况
    {
        if (nums[0] != 0)
        {
            // --__-- 我太难了。。。
            int temp[10] = {2,1,4,7,4,8,3,6,4,7};
            for (j = 0; j <= 9; ++j)
            {
                if (nums[j] < temp[j])
                {
                    break;
                }
                else if (nums[j] > temp[j])
                {
                    return 0;
                }
            }
        }
    }

    // 不会溢出
    for (j = 0; j <= i; ++j)
    {
        ans += nums[j] * pow(10, i - j);
    }

    if (signal == 1)
    {
        return -ans;
    }
    return ans;
}

// @lc code=end

