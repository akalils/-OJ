// 数列的定义如下：数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
#include <iostream>
using namespace std;
int main()
{
    double n, m;
    while (cin >> n >> m)
    {
        double res = n;
        m--;
        while (m--)
        {
            n = sqrt(n);
            res += n;
        }
        printf("%.2lf\n", res);
    }
    return 0;
}
