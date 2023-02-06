#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main()
{
    int dice, roll;
    int sides;
    srand(time(0));
    printf("Enter the number of sides per die, 0 to stop\n");
    while(scanf("%d",&sides) == 1 && sides > 0){
        printf("How many dice?\n");
        scanf("%d",&dice);
        roll = roll_n_dice(dice,sides);
        printf("You have rolled a %d use %d %d-sides dice.\n",roll,dice,sides);
        printf("Enter the number of sides per die, 0 to stop\n");
    }
    printf("The rollem function was called %d times.\n",roll_count);
    printf("Good bye\n");
}