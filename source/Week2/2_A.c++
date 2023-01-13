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
        step = 0;
        c++;
        for (size_t i = 0; i < n; i++)
        {
            cin >> stack[i];
            avg += stack[i];
        }
        avg /= n;
        for (size_t i = 0; i < n; i++)
        {
            if(stack[i] > avg){
                step += stack[i] -avg;
            }
            else if(stack[i] < avg){
                step += avg - stack[i];
            }
        }
        step /= 2;
        cout << "Set #" << c << '\n';
        cout << "The minimum number of moves is " << step << ".\n";
    }
}