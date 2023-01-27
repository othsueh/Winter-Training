#include <stdio.h>
#define MIN 1
int main()
{
    int i = MIN;
    while (++i <= 100)
    {
        printf("The left bottle is %d\n", i);
    }
}