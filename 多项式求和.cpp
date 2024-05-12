/* 多项式的描述如下：
1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + ... 现在请你求出该多项式的前n项的和。
*/
#include <iostream>
using namespace std;
int main()
{
    
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        double res = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                res -= 1.0 / i;
            else
                res += 1.0 / i;
        }
        printf("%.2lf\n", res);
    }
    return 0;
}
