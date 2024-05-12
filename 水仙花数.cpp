/*  春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
    “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。 
    现在要求输出所有在m和n范围内的水仙花数。
*/
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        bool check = false;
        for (int i = m; i <= n; i++)
        {
            int ge = i % 10;
            int shi = i % 100 / 10;
            int bai = i / 100;
            if (pow(ge, 3) + pow(shi, 3) + pow(bai, 3) == i)
            {
                check = true;
                cout << i << ' ';
            }
        }
        if (check == false)
            cout << "no";
        cout << endl;
    }
    return 0;
}
