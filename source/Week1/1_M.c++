#include <iostream>
#include <stddef.h>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    int o, s, b = 0;
    int time = 0,temp = 0, left = 0;
    cin >> n;
    while (n--)
    {
        cin >> o >> s >> b;
        temp = o + s;
        while(temp >= b){
            time += temp / b;
            temp = temp / b + temp % b;
        }
        cout << time <<'\n';
        time = 0, temp = 0, left = 0;

    }
}