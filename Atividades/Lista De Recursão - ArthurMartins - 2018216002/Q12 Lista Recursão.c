#include <stdio.h>

void imprimecrescente(int n);

int main(void)
{ 
  int n = 8;
  imprimecrescente(n);

  return 0;
}

void imprimecrescente(int n){

	if(n>0)

	imprimecrescente(n-1);

	printf("%d\n", n);
}
  