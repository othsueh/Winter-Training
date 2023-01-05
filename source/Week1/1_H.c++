#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int t = 0, a = 0, f = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> f;
        for (size_t i = 0; i < f; i++)
        {
            for (size_t j = 1; j <= a; j++)
            {
                for (size_t k = 0; k < j; k++)
                {
                    cout << j;
                }
                cout << '\n';
            }
            for (size_t j = a - 1; j > 0; j--)
            {
                for (size_t k = 0; k < j; k++)
                {
                    cout << j;
                }
                cout << '\n';
            }
            if (i == f - 1 && t == 0)
                break;

            cout << '\n';
        }
    }
}