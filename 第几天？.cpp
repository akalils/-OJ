// 给定一个日期，输出这个日期是该年的第几天。
#include <iostream>
#include <string>
using namespace std;
bool check(int x)
{
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
        return true;
    return false;
}
int mon[14];
int main()
{
    int year, month, day;
    for (int i = 1; i <= 12; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            mon[i] = 31;
        else
            mon[i] = 30;
    }
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
    {
        int res = 0;
        if (check(year))
            mon[2] = 29;
        else
            mon[2] = 28;
        for (int i = 1; i < month; i++)
            res += mon[i];
        res += day;
        cout << res << endl;
    }

    return 0;
}
