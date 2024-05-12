// 统计给定的n个数中，负数、零和正数的个数。
# include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int fushu = 0, ling = 0, zhengshu = 0;
        while (n--)
        {
            double x;
            cin >> x;
            if (x < 0)
                fushu++;
            else if (x == 0)
                ling++;
            else if (x > 0)
                zhengshu++;
        }
        cout << fushu << ' ' << ling << ' ' << zhengshu << endl;
    }
    return 0;
}
