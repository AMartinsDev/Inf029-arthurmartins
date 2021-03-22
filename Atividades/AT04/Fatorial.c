#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int fatorial (int *n, int *fat)
{
    if(*n<0)
    
    return printf("Numero negativo, nao eh possivel realizar o fatorial.\n\n");
    
    else

       for(*fat = 1; *n > 1; *n = *n-1)
       {
           *fat = (*fat)*(*n);
       }
    
    return *fat;
}

int main(void)
{
    int num, fat;

    printf("Digite o numero que voce deseja fazer o fatorial:\n"); scanf("%d", &num);

    fat = fatorial(&num,&fat);

    if(num>=0)
    {
        printf("O resultado do fatorial eh: %d\n", fat);
    }
    else
    {
        return fatorial;
    }
    
    return 0;
}
 