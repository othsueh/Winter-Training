#include <iostream>
#include <stddef.h>
#include <string.h>
using namespace std;
string mylove = "22233344455566677778889999" ;
int main()
{
    char string[30];
    while(scanf("%s", string) == 1){
        size_t len = strlen(string);
        for(size_t i = 0; i < len; i++){
            switch(string[i]){
                case '0':
                    putchar('0');
                    break;
                case '1':
                    putchar('1');
                    break;
                case '-':
                    putchar('-');
                    break;
                default:
                    printf("%c", mylove[string[i] - 'A']);
                    break;
            }
        }
        putchar('\n');
        
        for(size_t i = 0; i < len; i++){
            string[i] = '\0';
        }
    }    
}