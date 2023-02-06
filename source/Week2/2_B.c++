#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
// Solution 1
// #define LEN 4
// #define CAL card[i]/
// #define DEBUG
// int main()
// {
//     int n = 0;
//     if(scanf("%d",&n) == 1){
//         while(n--){
//             int card[LEN] = {0};
//             int total = 0;
//             for(size_t i = 0; i < LEN; i++)                scanf("%d",&card[i]);
//             for(size_t i = 0; i < LEN; i++){
//                 total += 2*(CAL 1000) / 10 + 2*(CAL 1000) %10;
//                 total += 2*(card[i] % 100 / 10) / 10 + 2*(card[i] % 100 / 10) %10;
//                 total += card[i] % 1000 / 100 + card[i] % 10;
//             }
//             if(total % 10 == 0) printf("Valid\n");
//             else printf("Invalid\n");
//         }
//     }
// }
//solution 2
#define LEN 19
int main()
{
    int n = 0;
    scanf("%d",&n);
    while(n--){
        char card[LEN];
        int total = 0;
        scanf(" %[^\n]s",card);
        for(size_t i =0; i< LEN; i+=5){
            for(size_t j = 0; j < 4; j++){
                if(j==0 || j ==2) total += 2*(card[i+j] - '0')/10 + 2*(card[i+j] - '0')%10;
                else total += card[i+j] - '0';
            }
        }
        if(total%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }
}