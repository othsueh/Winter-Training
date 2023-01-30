#include <stdio.h>

int main()
{
    int ch;
    char key = 'C';
    while ((ch = getchar()) != key)
    {
        printf("Not right, try again!\n");
        while (getchar() != '\n')
            continue;
    }
    putchar(ch);
    printf("\tGreat, you guess right!\n");
}