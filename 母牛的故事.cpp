/*
有一头母牛，它每年年初生一头小母牛。
每头小母牛从第四个年头开始，每年年初也生一头小母牛。
请编程实现在第n年的时候，共有多少头母牛？
*/
#include <iostream>
using namespace std;
int calc(int x)
{
    if (x == 1)
        return 1;
    if (x == 2)
        return 2;
    if (x == 3)
        return 3;
    return (calc(x - 1) + calc(x - 3));
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << calc(n) << endl;
    }
    return 0;
}
