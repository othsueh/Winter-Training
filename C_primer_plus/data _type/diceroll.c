#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>

int roll_count = 0;
static int rollem(int sides){
    int roll;
    roll = rand() % sides + 1;
    ++roll_count;
    return roll;
}
int roll_n_dice(int dice, int sides){
    int d;
    int total = 0;
    if(sides < 2){
        printf("At least need two sides");
        return -2;
    }
    if(dice < 1){
        printf("At least need one dice");
        return -1;
    }
    for(size_t i = 0; i < dice; i++){
        total += rollem(sides);
    }
    return total;
}