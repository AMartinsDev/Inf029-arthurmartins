#include <stdio.h>

void imprimepares(int n);

int main(void)
{ 
  int n = 8;
  imprimepares(n);

  return 0;
}

void imprimepares(int n){

if (n>0)

  if(n % 2 == 0)
    
	imprimepares(n-1);

printf("%d\n", n);

}
  