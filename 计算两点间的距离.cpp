# 输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
#include <iostream>
using namespace std;
int main()
{
    float x, y, a, b;
    while (cin >> x >> y >> a >> b)
    {
        float list = sqrt((a - x) * (a - x) + (b - y) * (b - y));
        printf("%.2f", list);
    }
    
    return 0;
}
