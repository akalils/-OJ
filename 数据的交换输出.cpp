// 输入n(n < 100) 个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int x;
        vector<int> res;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            res.push_back(x);
        }
        int MIN = res[0];
        int min_index = 0;
        for (int i = 1; i < res.size(); i++)
        {
            if (res[i] < MIN)
            {
                MIN = res[i];
                min_index = i;
            }
        }

        int temp = res[0];
        res[0] = MIN;
        res[min_index] = temp;

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << ' ';
        cout << endl;
    }
}
