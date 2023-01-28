#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int x, y, max;
    do
    {
        scanf("%d , %d", &x, &y);
        max = MAX(x, y);
        printf("max = %d\n", max);
    } while (x != y);
}