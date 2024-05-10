// 根据输入的半径值，计算球的体积。
#define PI 3.1415927
#include <iostream>
using namespace std;
int main()
{
    double r;
    while (cin >> r)
    {
        double V = (4 * PI * r * r * r) / 3;
        printf("%.3lf", V);
    }
    return 0;
}
