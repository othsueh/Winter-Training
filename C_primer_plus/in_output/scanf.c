#include <stdio.h>
#define _DEBUG_
int main()
{
    int a[10];
    int c = 0;
    for (size_t i = 0; i < 10; i++)
    {
        if (scanf("%d", &a[i]) == 1)
            c++;
        else
        {
            printf("type error!\n");
            while (getchar() != '\n')
            {
                i--;
                continue;
            }
        }
    }
#ifdef _DEBUG_
    for (size_t i = 0; i < 10; i++)
        printf("%d\n", a[i]);
#endif
    printf("%d\n", c);
}