/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start


int romanToInt(char * s)
{
    int length = strlen(s);

    int nums[4000] = {0};

    char roman[7 + 1] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int equal[7] = {1, 5, 10, 50, 100, 500, 1000};

    int i, j;  // counter;
    for (i = 0; i < length; ++i)
    {
        for (j = 0; j < 7; ++j)
        {
            if (s[i] == roman[j])
            {
                nums[i] = equal[j];
            }
        }
    }

    int ans = 0;
    for (i = 0; i < length;)
    {
        if (nums[i] < nums[i + 1]) // 小数 大数
        {
            ans += nums[i + 1] - nums[i];
            i = i + 2;
        }
        else    // 大数 小数
        {
            ans += nums[i];
            ++i;
        }
    }

    return ans;
}

// @lc code=end

