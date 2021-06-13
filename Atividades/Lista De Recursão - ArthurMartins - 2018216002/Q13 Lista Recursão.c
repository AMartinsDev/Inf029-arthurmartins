#include <stdio.h>

void imprimepares(int n);

int main(void)
{ 
  int n = 8;
  imprimepares(n);

  return 0;
}

void imprimepares(int n){

	printf("%d\n", n);

    if(n>0)

	imprimepares(n-1);

}
 