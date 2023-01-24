#include <stdio.h>
#define TWO 2
#define SQUARE(X) ((X) * (X))
#define PA(X) printf(#X "'s Square is : %d\n", SQUARE(X))

int main()
{
    int a = TWO;
    PA(a);
}