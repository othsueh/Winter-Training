#include <iostream>
#include <stddef.h>
using namespace std;

int main()
{
    int t = 0;
    short m = 0, d = 0;
    int day = 0;
    cin >> t;
    while (t--)
    {
        cin >> m >> d;
        switch (m)
        {
        case 1:
            day = d;
            break;
        case 2:
            day = 31 + d;
            break;
        case 3:
            day = 59 + d;
            break;
        case 4:
            day = 90 + d;
            break;
        case 5:
            day = 120 + d;
            break;
        case 6:
            day = 151 + d;
            break;
        case 7:
            day = 181 + d;
            break;
        case 8:
            day = 212 + d;
            break;
        case 9:
            day = 243 + d;
            break;
        case 10:
            day = 273 + d;
            break;
        case 11:
            day = 304 + d;
            break;
        case 12:
            day = 334 + d;
            break;
        default:
            break;
        }
        switch (day % 7)
        {
        case 0:
            cout << "Friday\n";
            break;
        case 1:
            cout << "Saturday\n";
            break;
        case 2:
            cout << "Sunday\n";
            break;
        case 3:
            cout << "Monday\n";
            break;
        case 4:
            cout << "Tuesday\n";
            break;
        case 5:
            cout << "Wednesday\n";
            break;
        case 6:
            cout << "Thursday\n";
            break;
        default:
            break;
        }
    }
}