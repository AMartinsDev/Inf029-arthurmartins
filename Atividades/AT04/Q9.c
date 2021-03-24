#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

// struct principal do programa.

typedef struct{
    char nome[20];
    char cpf[11];
    char sexo;
    int dia, mes, ano;
}cadastro;
cadastro Cliente;

//prototipo das funcoes a serem usadas.

cadastro CadastrarCliente(cadastro pessoa, int vetvalidacao[4]);
int validarnome();
int validarcpf();
int validarsexo();
int validardata();

// Programa principal.

int main(){
    
    int vetvalidacao[4] = {0,0,0,0};

    cadastro pessoa = CadastrarCliente(pessoa, vetvalidacao[4]);

    if (vetvalidacao[1] == 1)
      printf("erro no cadastro do nome!!\n");

    if(vetvalidacao[2] == 1)
      printf("erro na escolha do sexo!!\n");

    if(vetvalidacao[3] == 1)
      printf("erro no cadastro do cpf!!\n");

    if(vetvalidacao[4]== 1)
      printf("erro na data de nascimento\n");

    if((vetvalidacao[0] == 0) && (vetvalidacao[1] == 0) && (vetvalidacao[2] == 0) && (vetvalidacao[3] == 0) && (vetvalidacao[4] == 0)){
    printf("\ncadastro feito com sucesso\n");
    printf("nome: %s\n", pessoa.nome);
    printf("cpf: %s\n", pessoa.cpf);
    printf("sexo: %c \n", pessoa.sexo);
    printf("data de nascimento: %i/%i/%i\n", pessoa.dia, pessoa.mes, pessoa.ano);
    }

    return 0;
}

// Funções criadas

int validarnome(){

    int cont=0;

    while(Cliente.nome[cont] != '\0'){
        cont++;
    }

    if(cont<=20)
        return 0;
    else
        return 1;
}

int validarcpf(){

    int cont=0;

    while(Cliente.cpf[cont] != '\0'){
        cont++;
    }

    if(cont<=11)
    return 0;
    else
    return 1;    
}

int validarsexo(){

    if((Cliente.sexo == 'f') || (Cliente.sexo == 'F') || (Cliente.sexo == 'm') || (Cliente.sexo == 'M'))
    return 0;
    else
    return 1;
    
}

int validardata(){

    if(Cliente.ano >= 1900 && Cliente.ano <= 9999){

        if(Cliente.mes >= 1 && Cliente.mes <= 12){

            if ((Cliente.dia >= 1 && Cliente.dia <= 31) && (Cliente.mes == 1 || Cliente.mes == 3 || Cliente.mes == 5 || Cliente.mes == 7 || Cliente.mes == 8 || Cliente.mes == 10 || Cliente.mes == 12))
              return 0;
          else if ((Cliente.dia >= 1 && Cliente.dia <= 30) && (Cliente.mes == 4 || Cliente.mes == 6 || Cliente.mes == 9 || Cliente.mes == 11))
              return 0;
          else if ((Cliente.dia >= 1 && Cliente.dia <= 28) && (Cliente.mes == 2))
              return 0;
          else if (Cliente.dia == 29 && Cliente.mes == 2 && (Cliente.ano % 400 == 0 || (Cliente.ano % 4 == 0 && Cliente.ano % 100 != 0)))
              return 0;
          else
              return 1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}

cadastro CadastrarCliente(cadastro pessoa, int vetvalidacao[4]){


    printf("digite seu nome: \n");
    scanf("%s", &pessoa.nome);
    vetvalidacao[1] = validarnome(pessoa);

    printf("digite seu sexo f ou m: \n");
    getchar();
    scanf("%s", &pessoa.sexo);
    vetvalidacao[2] = validarsexo(pessoa);

    printf("digite seu cpf: \n");
    getchar();
    scanf("%s", &pessoa.cpf);
    vetvalidacao[3] = validarcpf(pessoa);

    printf("digite seu dia de nascimento: \n");
    scanf("%i", &pessoa.dia);
    fflush(stdin);
    printf("digite seu mes de nascimento: \n");
    scanf("%i", &pessoa.mes);
    fflush(stdin);
    printf("digite seu ano de nascimento: \n");
    scanf("%i", &pessoa.ano);
    vetvalidacao[4] = validardata(pessoa);

    return pessoa;
}
