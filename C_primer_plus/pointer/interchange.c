#include <stdio.h>
#define KILAY "!@#$%%^&*()_+"
#define YALIK "+_)(*&^%%$#@!"

void change(int *, int *);

int main()
{
    int a, b;
    printf(KILAY "\nAnter two numbers\n" YALIK "\n");
    while (scanf("%d, %d", &a, &b) == 2)
    {
        change(&a, &b);
        printf(KILAY "\nA = %d B = %d\n" YALIK "\n", a, b);
    }
}
void change(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}