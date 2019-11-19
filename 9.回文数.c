/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x)
{
    if (x < 0)  // 负数肯定不是回文数
    {
        return false;
    }

    int nums[10];   // int型变量最多十位
    int count = 0;
    while (x >= 10)
    {
        nums[count] = x % 10;
        x = x / 10;
        ++count;
    }
    nums[count] = x;

    if (count == 0) // 只有一位，是回文数
    {
        return true;
    }

    int mid = count / 2;
    if (mid == 0)   // 两位
    {
        if (nums[0] == nums[1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int i;  // counter
    for (i = 0; i <= mid; ++i)   // 三位及以上
    {
        if (nums[i] != nums[count - i])
        {
            return false;
        }
    }
    return true;
}

// @lc code=end

