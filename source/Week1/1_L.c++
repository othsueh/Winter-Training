#include <iostream>
#include <stddef.h>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    int t = 1;
    double d[14] = {0};
    for (size_t i = 1; i < 15; i++)
    {
        d[i - 1] = pow(2.0, i);
    }
    while (cin >> n && n >= 0)
    {
        for (size_t i = 0; i < 15; i++)
        {
            if (n == 1 || n == 0)
            {
                cout << "Case " << t << ": " << 0 << '\n';
                break;
            }
            if (n <= d[i])
            {
                cout << "Case " << t << ": " << i + 1 << '\n';
                break;
            }
        }
        t++;
    }
}