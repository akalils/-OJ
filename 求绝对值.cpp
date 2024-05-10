// 求实数的绝对值。
#include <iostream>
using namespace std;
int main()
{
    double x;
    while (cin >> x)
    {
        printf("%.2lf", abs(x));
    }
    return 0;
}
