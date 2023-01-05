#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int v = 0, t = 0;
    int distance = 0;
    while (cin >> v >> t && !cin.eof())
    {
        distance = v * (2 * t);
        cout << distance << '\n';
        distance = 0;
    }
}