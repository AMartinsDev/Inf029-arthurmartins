#include <stdio.h>

void imprimedecrescente(int n);

int main(void)
{ 
  int n = 8;
  imprimedecrescente(n);

  return 0;
}

void imprimedecrescente(int n){

	printf("%d\n", n);

    if(n>0)

	imprimedecrescente(n-1);

}
 