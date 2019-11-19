/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize)
{
    int minLength = strlen(strs[0]);

    int i, j;  // counter
    int key;
    for (i = 1; i < strsSize; ++i)
    {
        if (strlen(strs[i]) < minLength)
        {
            minLength = strlen(strs[i]);
            key = i;
        }
    }

    int count = 0;
    int signal = 1;
    for (j = 0; j < minLength; ++j)
    {
        for (i = 0; i < strsSize; ++i)
        {
            if (strs[i][j] != strs[key][j])
            {
                signal = 0;
            }
            count += signal;
        }
    }

    printf("%d", count);

    char *ans = (char*) malloc(count * sizeof(char));
    for (i = 0; i < count; ++i)
    {
        ans[i] = strs[key][i];
    }
    return ans;
}

// @lc code=end

