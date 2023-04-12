#include <stdio.h>
#define MAXTITL 40
#define MAXCOR 40
#define MAXAUTL 40
struct name{
    char first[MAXAUTL];
    char last[MAXAUTL];
};
struct game {
    char title[MAXTITL];
    char corpName[MAXCOR];
    struct name author;
    float price;
};
int main()
{
    struct game amongus = {
        "Amongus","US",{"Yuki","Noshida"},35.75
    };
    printf("%s by %s %s of %s is $%.2f\n",amongus.title,amongus.author.first,amongus.author.last, amongus.corpName,amongus.price);
}