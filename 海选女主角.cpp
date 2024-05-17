/*
面试那天，刚好来了m * n个MM，
站成一个m * n的队列，副导演Fe(OH)2为每个MM打了分数，
分数都是32位有符号整数。一开始我很纳闷：分数怎么还有负的？
Fe(OH)2解释说，根据选拔规则，头发染成黄色、
化妆太浓、穿的太少等等都要扣分数的，扣的多了就可能是负分了
，当然，如果发现话语中夹有日语，就直接给-2147483648分了。
分数送上来了，是我做决定的时候了，我的一个选拔原则是，
要选一个面试分数绝对值（必须还是32位整数）最大的MM。
特别说明：如果不幸选中一个负分的MM，也没关系，
因为我觉得，如果不能吸引你，那要想法恶心你。
*/
#include <iostream>
using namespace std;
int a[1000 + 7][100 + 7];
int main()
{
    int n, m;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        // 赋值
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        int ans = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (abs(a[i][j]) > ans)
                    ans = abs(a[i][j]);
                    
        int x, y;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (abs(a[i][j]) == ans)
                {
                    x = i, y = j;
                    goto out;
                }
        out:
            printf("%d %d %d\n", x + 1, y + 1, a[x][y]);
        }
    return 0;
}
