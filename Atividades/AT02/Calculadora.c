#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int somar(int x, int y);
int subtrair(int x, int y);
int multiplicar(int x, int y);
int dividir(int x, int y);

int main()
{
    int num1, num2, op, result;
	
	do
	{
		printf("\nQual operacao gostaria de fazer?\n");
		scanf("%d", &op);
		
		switch (op)
		{
			case 0:
			printf("Obrigado por usar o programa.\n");
			break;

			case 1:
			printf("Digite o primeiro numero a ser somado:\n");scanf("%d", &num1);
    		fflush(stdin);
    		printf("Digite o segundo numero a ser somado:\n"); scanf("%d", &num2);	
			result = somar(num1, num2);
			printf("O resultado da soma eh: %d \n", result);
			break;

			case 2:
			printf("Digite o primeiro numero a ser subtraido:\n"); scanf("%d", &num1);
    		fflush(stdin);
    		printf("Digite o segundo numero a ser subtraido:\n"); scanf("%d", &num2);		
			result = subtrair(num1, num2);
			printf("O resultado da subtracao eh: %d \n", result);
			break;
			
			case 3:
			printf("Digite o primeiro numero a ser multiplicado:\n"); scanf("%d", &num1);
    		fflush(stdin);
    		printf("Digite o segundo numero a ser multiplicado:\n"); scanf("%d", &num2);		
			result = multiplicar(num1, num2);
			printf("O resultado da multiplicacao eh: %d \n", result);
			break;

			case 4:
			printf("Digite o primeiro numero a ser dividido:\n"); scanf("%d", &num1);
    		fflush(stdin);
    		printf("Digite o segundo numero a ser dividido:\n"); scanf("%d", &num2);		
			result = dividir(num1, num2);
			printf("O resultado da divisao eh: %d \n", result);
			break;
			
			default:
			printf("\nOpcao invalida\n");
		}
	}while(op!=0); 

	return 0;
}

int somar(int x, int y)
{
	int result;
    result = x + y;

    return result;
}

int subtrair(int x, int y)
{	
	int result;
	result = x - y;

	return result;
}

int multiplicar(int x, int y)
{	
	int result;
	result = x * y;
	
	return result;
}

int dividir(int x, int y)
{	
	int result;
	result = x/y; 

	return result;
}
 