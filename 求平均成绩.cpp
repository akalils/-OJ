/*
假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，
求每个学生的平均成绩和每门课的平均成绩，
并输出各科成绩均大于等于平均成绩的学生数量。
*/
#include <iostream>
using namespace std;
int a[50][5]; // 成绩单
double b[50]; // 学生平均成绩
double c[5];  // 学科平均成绩
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            b[i] = 0;
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                b[i] += a[i][j];
            }
            b[i] = 1.0 * b[i] / m;
        }

        memset(c, 0, sizeof(c));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                c[i] += a[j][i];
            c[i] = 1.0 * c[i] / n;
        }

        for (int i = 0; i < n - 1; i++)
            printf("%.2lf", b[i]);
        printf("%.2lf\n", b[n - 1]);
        for (int i = 0; i < m - 1; i++)
            printf("%.2lf", c[i]);
        printf("%.2lf\n", c[m - 1]);

        int count = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            flag = true;
            for (int j = 0; j < m; j++)
            {
                if (1.0 * a[i][j] < c[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
