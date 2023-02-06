#include <stdio.h>

extern int hello;
extern char hello100[100];
static int try = 35;
extern void helloone();
void printtry();
int main()
{
    printf("%d\n",hello);
    printtry();
    int hello = 36;
    printf("%d\n",hello);
    helloone();
    printf("%s\n", hello100);
}
void printtry(){
    printf("%d\n",try);
}