#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct imprimir{
char p1[15], p2[15], p3[15]; 
}palavras;

palavras ler3palavras(palavras Palavras);

int main(){

    palavras Palavras = ler3palavras(Palavras);

    printf("Palavra 1: %s \n", Palavras.p1);
    printf("Palavra 2: %s \n", Palavras.p2);
    printf("Palavra 3: %s \n", Palavras.p3);

    return 0;
}

palavras ler3palavras(palavras Palavras){

    printf("Digite 3 palavras:\n");

    scanf("%s%s%s", &Palavras.p1[15], &Palavras.p2[15], &Palavras.p3[15]);

    return Palavras;
}

