#include <stdio.h>
#define MAX 100

int main()
{
    char name[MAX];
    char both[MAX];
    gets(name);
    puts(name);
    size_t i = 0;
    while (fgets(both, MAX, stdin))
    {
        i = 0;
        while (both[i])
        {
            putchar(both[i++]);
        }
    }
}