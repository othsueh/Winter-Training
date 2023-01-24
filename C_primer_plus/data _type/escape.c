#include <stdio.h>

int main()
{
    double salary;
    printf("Give your salary:$________\b\b\b\b\b\b\b\b");
    scanf("%lf", &salary);
    printf("\n\t %.2lf, the salary is good!",salary * 12.0);
    printf("\r Gee !\n");
}