#include <stdio.h>

int main()
{
    int xy[4][2];
    char c;
    scanf(" %c",&c);
    for(size_t i = 0; i < 2; i++){
        scanf(" (%d,%d)",&xy[i][0],&xy[i][1]);
    }
    printf("%c\n",c);
    for(size_t i = 0; i < 2; i++){
        printf("(%04d,%04d)\n",xy[i][0],xy[i][1]);
    }
}