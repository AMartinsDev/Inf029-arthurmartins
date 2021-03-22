#include <stdio.h>

int fatorial(int num)
{
    int fat, aux;

    fat = num;

    while(num>1){

        aux = num - 1;
        fat = fat * aux;
        num = num - 1;

    }

    return fat;
    
}  