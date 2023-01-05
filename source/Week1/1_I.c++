#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int n = 1;
    int dx = 0, dy = 0;
    int x = 0, y = 0;
    while (cin >> n && n != 0)
    {
        cin >> dx >> dy;
        for (size_t i = 0; i < n; i++)
        {
            cin >> x >> y;
            if (x == dx || y == dy)
                cout << "divisa\n";
            else if (x > dx && y > dy)
                cout << "NE\n";
            else if (x < dx && y > dy)
                cout << "NO\n";
            else if (x > dx && y < dy)
                cout << "SE\n";
            else if (x < dx && y < dy)
                cout << "SO\n";
        }
    }
}