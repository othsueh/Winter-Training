#include <stdio.h>
#include <string.h>
#define LEN 40

struct name{
    char first[LEN];
    char last[LEN];
    int letter;
};

struct name getInfo();
struct name makeInfo(struct name *);
void showInfo(struct name *);
int main()
{
    struct name person[2];
    for(size_t i = 0; i < 2; i++){
    person[i] = getInfo();
    makeInfo(&person[i]);
    showInfo(&person[i]);}
}
struct name getInfo()
{
    struct name temp;
    printf("Enter your first name: ");
    scanf(" %[^\n]s",temp.first);
    printf("Enter your last name: ");
    scanf(" %s",temp.last);
    return temp;
}
struct name makeInfo(struct name *info)
{
    info->letter = strlen(info->first) + strlen(info->last);
    return *info;
}
void showInfo(struct name *info)
{
    printf("Hi %s %s, your name letter is %d.\n",info->first,info->last,info->letter);
}