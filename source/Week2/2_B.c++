#include <stdio.h>
#include <iostream>
#define LEN 4
#define CAL card[i]/
#define DEBUG
int main()
{
    int n = 0;
    if(scanf("%d",&n) == 1){
        while(n--){
            int card[LEN] = {0};
            int total = 0;
            for(size_t i = 0; i < LEN; i++)                scanf("%d",&card[i]);
            for(size_t i = 0; i < LEN; i++){
                total += 2*(CAL 1000) / 10 + 2*(CAL 1000) %10;
                total += 2*(card[i] % 100 / 10) / 10 + 2*(card[i] % 100 / 10) %10;
                total += card[i] % 1000 / 100 + card[i] % 10;
            }
            if(total % 10 == 0) printf("Valid\n");
            else printf("Invalid\n");
        }
    }
}