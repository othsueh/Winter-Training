#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    short t = 0;
    short s[10] = {0};
    int flag = 0;
    cin >> t;
    cout << "Lumberjacks:\n";
    while (t--)
    {
        for (size_t i = 0; i < 10; i++)
        {
            cin >> s[i];
        }
        if (flag == 0)
        {
            if (s[0] < s[1])
                flag = 1;
            else if (s[0] > s[1])
                flag = -1;
        }
        for (size_t i = 1; i < 9; i++)
        {
            if (flag == 1 && s[i] > s[i + 1])
            {
                flag = 0;
                break;
            }
            if (flag == -1 && s[i] < s[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "Unordered\n";
        else if (flag == 1 || flag == -1)
            cout << "Ordered\n";
        flag = 0;
    }
}