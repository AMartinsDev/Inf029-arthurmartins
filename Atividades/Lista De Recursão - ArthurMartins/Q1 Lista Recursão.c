#include <stdio.h>

int fatorial(int x)
{
	if(x) 

  	return x*fatorial(x-1);

	else 
    
    return 1;
}

int main()
{
	int x;

	printf("\n\nDigite o valor: ");
	scanf("%d", &x);

	printf("\nO fatorial de %d e %d", x, fatorial(x));

	return 0;
}