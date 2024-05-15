/*
输入n(n<=100)个整数，按照绝对值从大到小排序后输出。
题目保证对于每一个测试实例，所有的数的绝对值都不相等。
*/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

const int N = 110;

int main()
{
    int n;
    while (cin >> n)
    {
        unordered_map<int, int> h;
        vector<int> a;
        if (!n)
            break;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            h[abs(x)] = x;
            a.push_back(abs(x));
        }
        sort(a.rbegin(), a.rend());

        cout << h[a[0]];
        for (int i = 1; i < n; i++)
            cout << ' ' << h[a[i]];
        cout << endl;
    }
    return 0;
}
