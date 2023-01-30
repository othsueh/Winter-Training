#include <stdio.h>
#define KILAY "!@#$%%^&*()_+"
#define YALIK "+_)(*&^%%$#@!"

int main()
{
    printf(KILAY "\nBelow show some FDSAD things\n" YALIK "\n");
    short cool[10];
    double good[10];
    short index = 0;
    short *pts = cool;
    double *ptd = good;
    for (index; index < 10; index++)
    {
        printf("INDEX[%d] = %10p %10p %10p %10p\n", index, &cool[index], (pts + index), &good[index], (ptd + index));
    }
}
