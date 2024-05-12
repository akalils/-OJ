//对于表达式n ^ 2 + n + 41，当n在（x, y）范围内取整数值时（包括x, y）(-39 <= x < y <= 50)，判定该表达式的值是否都为素数。
#include <iostream>
using namespace std;
bool check(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i < x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
            break;
        bool success = true;
        for (int i = x; i <= y; i++)
            if (check(i * i + i + 41) == 0)
                success = false;
        if (success == true)
            puts("OK");
        else
            puts("Sorry");
    }
    return 0;
}
