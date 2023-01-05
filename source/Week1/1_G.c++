#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    short t = 0, c = 0, h = 0, l = 0, temp = 0, ori = 0;
    cin >> t;
    for (size_t j = 1; j <= t; j++)
    {
        cin >> c;
        for (size_t i = 0; i < c; i++)
        {
            if (i == 0)
            {
                cin >> temp;
                continue;
            }
            cin >> ori;
            if (ori > temp)
                h++;
            else if (ori < temp)
                l++;
            temp = ori;
        }
        cout << "Case " << j << ": " << h << " " << l << '\n';
        h = 0, l = 0;
    }
}