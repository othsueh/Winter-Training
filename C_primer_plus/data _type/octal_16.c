#include <stdio.h>
#define X 100
int main()
{
    printf("decimal is %d, octal is %o, hex is %x\n", X,X,X);
    printf("decimal is %d, octal is %#o, hex is %#x\n", X,X,X);
}