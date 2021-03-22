#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

float subtrair(float num1, float num2, float num3)
{
    float result;

    result = num1-num2-num3;

    return result;
}

int main(void)
{
    float num1, num2, num3, calc;

    printf("Digite tres numeros para serem subtraidos:\n"); scanf("%f %f %f", &num1, &num2, &num3);

    calc = subtrair(num1,num2,num3);
    
    printf("O resultado da subtracao eh %.2f:\n", calc);

    return 0;
    
}