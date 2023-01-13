#include <stdio.h>
#define TWO 2
#define SQUARE(X) (X) * (X)
#define PA printf("a is : %d\n", a)

int main()
{
    int a = TWO;
    PA;
    a = 100 / SQUARE(a);
    PA;
}