#include <iostream>
#include <stddef.h>
#include <math.h>
using namespace std;

int main()
{
    int list[1000] = {0};
    int t = 0;
    int n = 0;
    int sum = 0;
    cin >> t;
    while(t--){
        cin >> n;
        for(size_t i = 0; i < n; i++){
            cin >> list[i];
        }
        for(size_t i = 1; i < n; i++){
            for(size_t j = 0; j < i; j++){
                if(list[i] >= list[j]) sum++; 
            }
        }
        cout << sum <<'\n';
        sum = 0;
    }
}