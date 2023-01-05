#include <iostream>
#include <stddef.h>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    int o, s, b = 0;
    int time = 0;
    cin >> n;
    while (n--)
    {
        cin >> o >> s >> b;
        time += o / b;
        }
}