/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize)
{
    int i;  // counter
    for (i = 1; i < strsSize; i++)
    {
        if (strs[0][0] != strs[i][0])
        {
            return "";
        }
    }

    int minLength = strlen(strs[0]);// 假定第一个字符串长度最短

    for (i = 1; i < strsSize; i++)// 寻找最短字符串长度
    {
        if (strlen(strs[i]) < minLength)
        {
            minLength = strlen(strs[i]);
        }
    }

    char *ans = (char*)malloc(minLength);
    int j;// counter
    int flag = 1;
    for (i = 0; i < minLength; i++)
    {
        char temp = strs[0][i];
        for (j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != temp)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            ans[i] = temp;
        }
        else
        {
            break;
        }
    }
    return ans;
}


// @lc code=end