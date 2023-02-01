#include <stdio.h>

int main()
{
    const char cool[30] = "cool cool cool";
    const char *good = "good good good";
    const char *bad[10] = {"you", "are", "bad", "guy", "are", "you", "?"};
    printf("%s\n%s\n", cool, good);
    size_t i = 0;
    while (cool[i] != '\0')
    {
        printf("%c", cool[i++]);
    }
    putchar('\n');
    while (*good != '\0')
    {
        printf("%c", *good++);
    }
    putchar('\n');
    for (size_t i = 0; i < 7; i++)
    {
        puts(*(bad + i));
    }
}