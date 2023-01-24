#include <stdio.h>
#define XNAME(n) x##n
#define PX(n) printf("x" #n "'s value is %d\n", x##n)

int main()
{
    int XNAME(1) = 16;
    int XNAME(2) = 32;
    PX(1);
    PX(2);
}