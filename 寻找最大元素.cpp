/*
对于输入的每个字符串，查找其中的最大字母，
在该字母后面插入字符串“(max)”。
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        char maxs = '\0';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > maxs)
                maxs = s[i];
        }

        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
            if (s[i] == maxs)
                cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}
