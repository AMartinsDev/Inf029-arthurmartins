#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int subtrair(int num1, int num2, int num3);


int main(void)
{
    int num1, num2, num3, calc;

    printf("Digite tres numeros para serem subtraidos:\n"); scanf("%d %d %d", &num1, &num2, &num3);

    calc = subtrair(num1,num2,num3);
    
    printf("O resultado da subtracao eh %d:\n", calc);

    return 0;
    
}


int subtrair(int num1, int num2, int num3)
{
    int result;

    result = num1-num2-num3;

    return result;
}