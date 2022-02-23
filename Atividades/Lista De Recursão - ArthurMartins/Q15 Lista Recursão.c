#include <stdio.h>

void imprimeparesdecrescente(int n);

int main(void)
{ 
  int n = 8;
  imprimeparesdecrescente(n);

  return 0;
}

void imprimeparesdecrescente(int n){

  if(n % 2 == 0)

  printf("%d\n", n);

  
	if(n>0)

	imprimeparesdecrescente(n-1);

}
  