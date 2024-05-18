// 输入一个字符串，判断其是否是C的合法标识符。
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    string s;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        bool flag = true;
        getline(cin, s);
        if (s[0] != '_' && !(s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && s[0] <= 'Z'))
            flag = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != '_' && !(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= '0' && s[i] <= '9'))
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            printf("yes");
        else
            printf("no");
    }
    return 0;
}
