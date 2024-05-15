/*
有n(n<=100)个整数，已经按照从小到大顺序排列好，
现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
*/
#include <iostream>
#include <vector>
using namespace std;
const int N = 110;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;
        bool s = false;
        int a[N];
        int i = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (i; i < n; i++)
        {
            if (a[i] < m)
                cout << a[i] << ' ';
            else
            {
                if (i == n) cout << m;
                else
                    cout << m << ' ';
                s = true;
                break;
            }
        }
        if (i == n - 1 && s == false)
            cout << m;
        else if (i == n - 1 && s == true)
            cout << a[i];
        else
        {
            while (i != n)
            {
                if (i == n - 1)
                    cout << a[i];
                else
                    cout << a[i] << ' ';
                i++;
            }
        }
        cout << endl;
        }
    return 0;
}
