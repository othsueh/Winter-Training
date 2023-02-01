#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
    char name[SIZE] = "Michael Jordan";
    char title[SIZE] = " is the god of Basketball";
    char *another = "is who created the air jodan";
    char formal[SIZE * 2];
    printf("The length of %s is %ld\n", name, strlen(name));
    printf("The title is: %s\n", strcat(name, title));
    puts(name);
    another = strncpy(name + 15, another, SIZE - 14);
    puts(name);
    strncpy(name + 14, title, SIZE - 14);
    sprintf(formal, "%s, %s %s", name, "but also", another);
    puts(formal);
    printf("The difference is %d\n", strcmp("a", "A"));
    printf("The difference is %d\n", strncmp("appleu", "apples", 6));
}