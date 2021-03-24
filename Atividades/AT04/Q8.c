#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct{
    char nome[20];
    char cpf[11];
    char sexo;
    int dia, mes, ano;
}cadastro;
cadastro Cliente;

cadastro CadastrarCliente(cadastro pessoa);

int main(){

    cadastro pessoa = CadastrarCliente(pessoa);

    system("clear");
    printf("nome: %s\n", pessoa.nome);
    printf("cpf: % s\n", pessoa.cpf);
    printf("sexo: %c \n", pessoa.sexo);
    printf("data de nascimento: %i/%i/%i\n", pessoa.dia, pessoa.mes, pessoa.ano);

    return 0;
}

cadastro CadastrarCliente(cadastro pessoa){

    printf("digite seu nome: \n");
    scanf("%s", &pessoa.nome);
    printf("digite seu sexo f ou m: \n");
    getchar();
    scanf("%s", &pessoa.sexo);
    printf("digite seu cpf: \n");
    getchar();
    scanf("%s", &pessoa.cpf);
    printf("digite seu dia de nascimento: \n");
    scanf("%i", &pessoa.dia);
    fflush(stdin);
    printf("digite seu mes de nascimento: \n");
    scanf("%i", &pessoa.mes);
    fflush(stdin);
    printf("digite seu ano de nascimento: \n");
    scanf("%i", &pessoa.ano);

    return pessoa;
}