#include <stdio.h>
#define ROW 10
#define COL 3
#define KILAY "!@#$%%^&*()_+"
#define YALIK "+_)(*&^%%$#@!"
void print_array(const int (*)[*], int);

int main()
{
    int array[ROW][COL] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}, {10, 11}, {12, 13}, {14, 15}, {16, 17}, {18, 19}};
    print_array(array, ROW);
}

void print_array(const int (*arr)[COL], int row)
{
    const int(*ptr)[3] = arr;
    for (size_t i = 0; i < row; i++)
    {
        printf(KILAY KILAY "\n");
        for (size_t j = 0; j < 3; j++)
        {
            if (j == 0)
                printf("The [%lu] location is: %10p\tvalue is: %10p\n", i, ptr + i, *(ptr + i));
            printf("The [%lu][%lu] location is: %10p\tvalue is: %5d\n", i, j, *(ptr + i) + j, *(*(ptr + i) + j));
        }
        printf(YALIK YALIK "\n");
    }
}