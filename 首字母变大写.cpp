/*
输入一个英文句子，将每个单词的第一个字母改成大写字母。
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[100];
    while (gets(s))
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] -= 32;
        
        // 处理空格
        for (int i = 1; i < strlen(s); i++)
        {
            if (s[i - 1] == ' ' && (s[i] >= 'a' && s[i] <= 'z'))
                s[i] -= 32;
        }
        printf("%s\n", s);
    }
    return 0;
}
