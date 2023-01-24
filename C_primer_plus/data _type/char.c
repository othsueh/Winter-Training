#include <stdio.h>

int main()
{
    unsigned char c = 0;
    for(size_t i = 0; i < 256; i++){
        printf("char is: %c, number is: %d\n", c, c);
        c++;
    }
}