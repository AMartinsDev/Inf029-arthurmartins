#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct{
    char letra1, letra2, letra3;
}imprimir;
imprimir letra;

char ler3letras();

int main(void)
{
    ler3letras();

    printf("As 3 letras digitadas foram: %c %c %c \n", letra.letra1, letra.letra2, letra.letra3);

    return 0;
}

char ler3letras()
{
    printf("Digite a primeira letra:\n");
    scanf("%c", &letra.letra1);
    fflush(stdin);
    printf("Digite a segunda letra:\n");
    scanf("%c", &letra.letra2);
    fflush(stdin);
    printf("Digite a terceira letra:\n");
    scanf("%c", &letra.letra3);
    fflush(stdin);

    return 0;
}  
