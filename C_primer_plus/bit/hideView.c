#include <stdio.h>

char *printBit(short, char*);
int main()
{
    char bin_str[8*sizeof(short)+1];
    short a;
    scanf("%hd",&a);
    a <<= 4;
    printf("a = %hd\n, also = %s\n",a,printBit(a,bin_str));
    
}
char *printBit(short bit, char *str)
{
    static int size = 8*sizeof(short);
    for(int i = size - 1; i >= 0; i--,bit>>=1){
        str[i] = (01 & bit) + '0';
    }
    str[size] = '\0';
    return str;
}