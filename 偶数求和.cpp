/*
有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，
现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。
编程输出该平均值序列。
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    int n, m;
    while (cin >> n >> m)
    {
        vector<int> num;
        int sum = 0;
        int x = 2;
        for (int i = 1; i <= n; i++)
        {
            sum += x;
            x += 2;
            if (i % m == 0)
            {
                num.push_back(sum / m);
                sum = 0;
            }
        }
        if (sum != 0)
            num.push_back(sum / (n % m));
        cout << num[0];
        for (int i = 1; i < num.size(); i++)
            cout << ' ' << num[i];
        cout << endl;
    }
    return 0;
}
