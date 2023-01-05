#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int n = 1, t = 0, k = 0, flag = 0;
    while (cin >> n && n != 0)
    {
        cout << "The parity of ";
        for (int i = 31; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
            {
                if (flag == 0)
                    flag = 1;
                t++;
                cout << "1";
            }
            else
            {
                if (flag == 1)
                    cout << "0";
            }
        }
        cout << " is " << t << " (mod 2).\n";
        t = 0, flag = 0;
    }
}