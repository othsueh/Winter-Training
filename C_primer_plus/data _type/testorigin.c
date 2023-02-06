#include <stdio.h>

int hello = 35;
char hello100[100];
void helloone(){
    for(size_t i = 0 ; i < 100; i++){
        switch(i%5){
            case 0:
                hello100[i] = 'H';
                break;
            case 1: 
                hello100[i] = 'E';
                break;
            case 2:
            case 3:
                hello100[i] = 'L';
                break;
            case 4: 
                hello100[i] = 'O';
                break;
            default:
                break; 
        }
    }
}