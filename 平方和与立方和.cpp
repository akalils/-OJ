// 给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a > b)
            swap(a, b);
        int res_one = 0, res_two = 0;
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0)
                res_one += pow(i, 2);
            else
                res_two += pow(i, 3);
        }
        cout << res_one << ' ' << res_two << endl;
    }
    return 0;
}
