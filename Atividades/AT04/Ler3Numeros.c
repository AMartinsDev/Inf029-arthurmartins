#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define tam 3

void imprimirvetor(int vet[]);

int main(void){

    int vetor[tam], i;

    imprimirvetor(vetor);

    printf("Os numeros presentes no vetor sao:\n");
    for(i = 0; i <= 2; i++)

    printf("\n %d \n", vetor[i]);

    return 0;
}
    
void imprimirvetor(int vet[])
{   
    int i;

    printf("Digite tres numeros quaisquer:\n");

    for(i=0; i<=2; i++)

    scanf("%d", &vet[i]);
    fflush(stdin);

    return 0;
}  