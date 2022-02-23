#include <stdio.h>

int fib (n)
{

  if (n == 1 || n == 2)

    return 1;

  else

    return fib(n-1) + fib(n-2);

}


int main(void)
{ 

  int n;

  printf("\nDigite a quantidade de termos\n");

  scanf("%d", &n);

  printf("O termo de numero %d, na sequencia de fibonacci eh: %d\n", n, fib(n));

  return 0;

}
 