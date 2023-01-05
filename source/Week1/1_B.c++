#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int h1 = 0, h2 = 0, m1 = 0, m2 = 0;
    int alarm = 0;
    while (cin >> h1 >> m1 >> h2 >> m2 && (h1 + h2 + m1 + m2) != 0)
    {
        if (h2 == 0)
            h2 = 24;
        if (h1 < h2)
        {
            alarm += (h2 - h1) * 60;
            if (m1 < m2)
                alarm += m2 - m1;
            else if (m1 > m2)
                alarm -= m1 - m2;
        }
        else if (h1 > h2)
        {
            if (m2 > m1)
                alarm = (24 - (m1 - m2)) * 60 + (m2 - m1);
            else if (m1 > m2)
                alarm = (24 - (m1 - m2)) * 60 - (m1 - m2);
            else
                alarm = (24 - (m1 - m2)) * 60;
        }
        else
        {
            if (m2 > m1)
                alarm += m2 - m1;
            else if (m1 > m2)
                alarm = 24 * 60 - (m1 - m2);
        }
        cout << alarm << '\n';
        alarm = 0;
    }
}