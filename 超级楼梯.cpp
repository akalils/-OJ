//有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
#include <iostream>
using namespace std;
int main()
{
    int a[50];
    int n, k;
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i < 50; i++)
        a[i] = a[i - 1] + a[i - 2];
    while (scanf("%d", &n) != EOF)
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &k);
            printf("%d\n", a[k - 1]);
        }
        return 0;
}
