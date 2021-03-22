#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fatorial.h"

int main()
{
	int num;

	printf("Digite o numero que deseja fazer o fatorial:");
    scanf("%d", &num);

	fatorial(num);

	printf("O fatorial do numero digitado eh: %d", fatorial(num));

	return 0;
}
    