#include <iostream>
#include <stddef.h>
using namespace std;
int main()
{
    int stack[50] = {0};
    short n = 1;
    short temp = 0;
    int avg = 0;
    int step = 0;
    int c = 0;
    while (cin >> n && n != 0)
    {
        c++;
        for (size_t i = 0; i < n; i++)
        {
            cin >> stack[i];
            avg += stack[i];
        }
        avg /= n;
        for (size_t i = n - 1; i > 0; i--)
        {
            for (size_t j = 0; j < i; j++)
            {
                if (stack[j] > stack[j + 1])
                {
                    temp = stack[j];
                    stack[j] = stack[j + 1];
                    stack[j + 1] = temp;
                }
            }
        }
        for (size_t i = n - 1; i >= 1; i--)
        {
            int j = 0;
            while (stack[i] > avg)
            {
                if (stack[j] < avg)
                {
                    stack[j]++;
                    stack[i]--;
                    step++;
                }
                else if (stack[j] == avg)
                    j++;
            }
        }
        cout << "Set #" << c << '\n';
        cout << "The minimum number of move is " << step << '\n';
    }
}