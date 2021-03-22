#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int vet[4];

}imprimir; 
imprimir num;

void enter();

int main(void)
{
    int i;
    enter();
    system("cls");
    for(i=0; i<4; i++)
    printf("%d", num.vet[i]);
    return 0;
}

void enter()
{
    int i;
    printf("Digite 4 numeros:\n");
    for(i=0; i<4; i++)
    scanf("%d", &num.vet[i]);
    fflush(stdin);
    return 0;
} 