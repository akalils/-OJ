// Your task is to Calculate the sum of some integers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int x;
        int sum = 0;
        for (int i = 0; i < n; i ++)
        {
            
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
