/* 输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
90~100为A;
80~89为B;
70~79为C;
60~69为D;
0~59为E;
*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        if (t <= 100 && t >= 90)
            printf("A");
        else if (t <= 89 && t >= 80)
            printf("B");
        else if (t <= 79 && t >= 70)
            printf("C");
        else if (t <= 69 && t >= 60)
            printf("D");
        else if (t <= 59 && t >= 0)
            printf("E");
        else
            printf("Score is error!");
    }
    return 0;
}
