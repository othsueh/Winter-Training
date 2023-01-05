#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int n = 1;
    int temp = 0;
    while (cin >> n && n != 0)
    {
        while (n > 0)
        {
            temp += n % 10;
            n /= 10;
            if (n == 0 && temp > 9)
            {
                n = temp;
                temp = 0;
            }
        }
        cout << temp << '\n';
        temp = 0;
    }
}