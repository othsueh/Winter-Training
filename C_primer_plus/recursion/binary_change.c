#include <stdio.h>
void binch(int n)
{
    int r;
    r = n % 2;
    if (n >= 2)
        binch(n / 2);
    putchar('0' + r);
    return;
}
int main()
{
    int num;
    printf("Please input a nice number\n");
    while (scanf("%d", &num) == 1)
    {
        binch(num);
        putchar('\n');
        printf("Please input a nice number\n");
    }
    printf("quit successfully\n");
}