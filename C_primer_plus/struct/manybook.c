#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct books{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main()
{
    struct books library[MAXBKS];
    int count = 0;
    printf("Please enter the book title\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while(count < MAXBKS && scanf("%[^\n]s",library[count].title) != EOF && library[count].title[0] !='\0'){
        printf("Now enter the author.\n");
        scanf(" %[^\n]s", library[count].author);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while(getchar() != '\n') continue;
        if(count < MAXBKS) printf("Enter the next title.\n");
    }
    printf("Here is the list of your books.\n");
    for(size_t i = 0; i< count; i++){
        printf("%s\tby\t%s:\t$%.2f\n",library[i].title,library[i].author,library[i].value);
    }
}