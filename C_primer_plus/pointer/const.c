#include <stdio.h>
#define SIZE 10
#define STR "***********************"
void print_array(const int[], int);
int main()
{
    int cool[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_array(cool, SIZE);
    const int *ptr = cool;
    putchar('0' + *ptr);
    putchar(' ');
    ptr++;
    putchar('0' + *ptr);
    printf("\n" STR STR STR "\n");
    int *const ptr2 = cool;
    putchar('0' + *ptr2);
    *ptr2 = 9;
    putchar('0' + *ptr2);
    printf("\n" STR STR STR "\n");
}
void print_array(const int ar[], int size)
{
    printf(STR "The array is" STR "\n");
    for (size_t i = 0; i < size; i++)
    {
        putchar('0' + *(ar + i));
        putchar(' ');
    }
    printf("\n" STR STR STR "\n");
}