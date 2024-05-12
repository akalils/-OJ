// 青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int mi = 100, ma = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mi = min(x, mi);
            ma = max(x, ma);
            sum += x;
        }
        printf("%.2lf", (double)(sum - mi - ma) / (n - 2));
    }
        return 0;
}
