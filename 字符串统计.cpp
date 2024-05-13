// 对于给定的一个字符串，统计其中数字字符出现的次数。
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        string x;
        cin >> x;
        for (int i = 0; i < x.size(); i++)
            if (x[i] >= '0' && x[i] <= '9')
                count++;
        cout << count << endl;
    }
    return 0;
}
