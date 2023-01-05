#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int s[4] = {0};
    int temp = 0;
    int t = 0;
    while (n--)
    {
        for (size_t i = 0; i < 4; i++)
        {
            cin >> s[i];
        }
        for (int i = 3; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (s[j] > s[j + 1])
                {
                    temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            }
        }
        temp = s[0];
        for (size_t i = 1; i < 4; i++)
        {
            if (s[i] == temp)
                t++;
        }
        if (t == 3)
        {
            cout << "square\n";
            temp = 0, t = 0;
            continue;
        }
        if (s[0] == s[1] && s[2] == s[3])
        {
            cout << "rectangle\n";
            temp = 0, t = 0;
            continue;
        }
        if (s[0] + s[1] + s[2] > s[3])
        {
            cout << "quadrangle\n";
        }
        else
            cout << "banana\n";
        temp = 0, t = 0;
    }
}