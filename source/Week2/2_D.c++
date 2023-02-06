#include<cstdio>
#include<string.h>
#define LEN 80
int main()
{
    int t = 0;
    scanf("%d", &t);
    while(t--){
        char answer[LEN];
        scanf(" %s",answer);
        int total = 0;
        for(size_t i = 0, f = 1, c = 1; i < strlen(answer);i++){
            if(answer[i] == 'O') {
                if(f == 1){
                    total += c;
                    c++;
                } 
                else {
                    c = 1;
                    f = 1;
                    total += c;
                    c++;
                }
            }
            else {
                f = 0;
            }
        } 
        printf("%d\n",total);
    }
}