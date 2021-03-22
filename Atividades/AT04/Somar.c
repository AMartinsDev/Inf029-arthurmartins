#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int somar (int x, int y)
{
    int calc;

    calc = x + y;

    return calc;
}

int main()
{
    int num1, num2, result;

    printf("Digite o primeiro numero a ser somado:\n"); scanf("%d", &num1);
    fflush(stdin);
    printf("Digite o segundo numero a ser somado:\n"); scanf("%d", &num2);

    result = somar(num1,num2);

    printf("O resultado da soma eh: %d \n", result);

    return 0;
}
