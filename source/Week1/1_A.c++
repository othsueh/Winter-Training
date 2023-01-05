#include <iostream>
#include <stddef.h>
using namespace std;
int main()
{
    int t = 0;
    int a = 0, b = 0;
    int temp = 0;
    cin >> t;
    for (size_t i = 1; i <= t; i++)
    {
        cin >> a >> b;
        while (a <= b)
        {
            if ((a % 2) == 1)
                temp += a;
            a++;
        }
        cout << "Case " << i << ": " << temp << '\n';
        temp = 0;
    }
}
