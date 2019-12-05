#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize)
{
    int i;  // counter
    for (i = 1; i < strsSize; ++i)
    {
        if (strs[0][0] != strs[i][0])
        {
            return "";
        }
    }

    int minLength = strlen(strs[0]);// 假定第一个字符串长度最短

    for (i = 1; i < strsSize; ++i)// 寻找最短字符串长度
    {
        if (strlen(strs[i]) < minLength)
        {
            minLength = strlen(strs[i]);
        }
    }

    char *ans = (char*)malloc(minLength);
    int j;// counter
    int flag = 1;
    for (i = 0; i < minLength; ++i)
    {
        char temp = strs[0][i];
        for (j = 1; j < strsSize; ++j)
        {
            if (strs[j][i] != temp)
            {
                flag = 0;
                break;
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

int main()
{
    //char *strs[6] = {"flower","flow","flight"};
    char *strs[7] = {"dog","racecar","car"};
    printf("%s", longestCommonPrefix(strs, 3));
    return 0;
}
