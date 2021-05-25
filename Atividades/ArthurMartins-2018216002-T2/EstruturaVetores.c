#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#include "EstruturaVetores.h"

//ALUNO: ARTHUR SILVA MARTINS 
//MATRICULA: 2018216002
//DISCIPLINA: LABORATÓRIO DE PROGRAMAÇÃO

//cabeçalho de funções declaradas no final
int OrdenarVetorEspecifico(int posicao, int vetorAux[]);
int OrdenacaoDeTodosVetores(int QtdTotal, int vetorAux[]);

//STRUCT DO PROGRAMA
typedef struct Vetores{
  int *vetor;
  int quantidade;
  int tam;
  int aux;
}vetorPrincipal;

vetorPrincipal Vetores[TAM];


//FUNÇÃO PARA CONTAGEM DE ESTRUTURAS AUXILIARES EXISTENTES
int ContTodosVetores(){

int retorno;
int i; 
int k = 0;

    for(i=0; i<TAM; i++){

        if(Vetores[i].quantidade > 1){

        k++;

        }
    }
                    
  return k;  
}


//FUNÇÃO PARA CONTAGEM DE VAGAS TOTAIS NAS ESTRUTURAS AUXILIARES EXISTENTES
int QtdTotalEstruAux(){

int i;
int QtdTotal = 0;

  for(i=0; i<10; i++){

    QtdTotal = QtdTotal + Vetores[i].quantidade;

  }

  return QtdTotal;
}


//INICIALIZAÇÃO DE VARIAVEIS 
void inicializar(){

int i;

  for(i=0; i<10; i++)

    Vetores[i].aux = 0;
    Vetores[i].quantidade = 0;
    Vetores[i].tam = 0;
    Vetores[i].aux = 0;
}

void dobrar(int *x){

    *x = *x * 2;

}


/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'
Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho tem inteiro maior ou igual a 1
*/
int criarEstruturaAuxiliar(int posicao, int tamanho)
{
    int retorno = 0;

    if(posicao < 1 || posicao > 10){

      // se posição é um valor válido {entre 1 e 10}
      retorno = POSICAO_INVALIDA;

    }else if(Vetores[posicao].aux == 1){

      // a posicao pode já existir estrutura auxiliar
      retorno = JA_TEM_ESTRUTURA_AUXILIAR;
      
    }else if(tamanho < 1){

      // o tamanho nao pode ser menor que 1
      retorno = TAMANHO_INVALIDO;// o tamanho nao pode ser menor que 1

    }else{

        //Alocando Dinamicamente o vetor para estruturas auxiliares
        Vetores[posicao].vetor = (int*)malloc(sizeof(int)*tamanho);

        if(!Vetores[posicao].vetor){

            // o tamanho ser muito grande
            retorno = SEM_ESPACO_DE_MEMORIA;

        }

        Vetores[posicao].tam = tamanho;
        Vetores[posicao].quantidade = 0;
        Vetores[posicao].aux = 1;

        // deu tudo certo, crie
        retorno = SUCESSO;
    }

    return retorno;
}


/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{
    int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
    int posicao_invalida = 0;

    if(posicao < 1 || posicao > 10){

      retorno = POSICAO_INVALIDA;

    }
    else{

        // testar se existe a estrutura auxiliar
        if(Vetores[posicao].aux == 1){ 

          if(Vetores[posicao].quantidade < Vetores[posicao].tam){

            Vetores[posicao].vetor[Vetores[posicao].quantidade] = valor;

            Vetores[posicao].quantidade++;

              //insere
              retorno = SUCESSO;

            }
            else{

              retorno = SEM_ESPACO;

            }
        }
        else{

          retorno = SEM_ESTRUTURA_AUXILIAR;

        }
    }

    return retorno;
}


/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)
{
    int retorno = 0;

    if(posicao < 1 || posicao > 10){

    retorno = POSICAO_INVALIDA;

    }else if(Vetores[posicao].aux == 0){

    retorno = SEM_ESTRUTURA_AUXILIAR;

    }else if(Vetores[posicao].quantidade == 0){

    retorno = ESTRUTURA_AUXILIAR_VAZIA;

    }else{

    Vetores[posicao].quantidade--;
    retorno = SUCESSO;

    }

  return retorno;
}


/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
    int retorno = 0;
    int i; 
    int j; 
    int aux = 0;

    if(posicao < 1 || posicao > 10){

        retorno = POSICAO_INVALIDA;

    }else if(Vetores[posicao].aux == 0){

        retorno = SEM_ESTRUTURA_AUXILIAR;

    }else if(Vetores[posicao].quantidade <= 0){

        retorno = ESTRUTURA_AUXILIAR_VAZIA;

    }else{

        for(i = 0; i < Vetores[posicao].quantidade; i++){

            if(Vetores[posicao].vetor[i] == valor){

                for(j = i; j <Vetores[posicao].quantidade; j++){

                    Vetores[posicao].vetor[j] = Vetores[posicao].vetor[j + 1];

                }

                retorno = SUCESSO;    
            }
        }
            Vetores[posicao].quantidade--;

            for(i = 0; i<Vetores[posicao].quantidade; i++){
            }

        }

    if(retorno == NUMERO_INEXISTENTE){

        retorno = NUMERO_INEXISTENTE;

    }

    return retorno;
}


// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao)
{
    int retorno = 0;

    if (posicao < 1 || posicao > 10){

        retorno = POSICAO_INVALIDA;

    }else{

        retorno = SUCESSO;

    } 

    return retorno;
}


/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    int retorno = 0;
    int i;
    int qtd;
    int k;

    qtd = getQuantidadeElementosEstruturaAuxiliar(posicao);

    if(posicao < 1 || posicao > 10){

      retorno = POSICAO_INVALIDA;

    }else if(Vetores[posicao].aux == 0){
        
      retorno = SEM_ESTRUTURA_AUXILIAR;

      k = ContTodosVetores();
      
        if(k == 0){

        retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

        }
    }
    else{

        for(i = 0; i<qtd; i++){

            vetorAux[i] = Vetores[posicao].vetor[i];

        }

      retorno = SUCESSO;
    }

  return retorno;
}


/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    int retorno = 0;
    int i;
    int k;
    int qtd;

    qtd = getQuantidadeElementosEstruturaAuxiliar(posicao);

    if(posicao < 1 || posicao > 10){

      retorno = POSICAO_INVALIDA;

    }else if(Vetores[posicao].aux == 0){

        retorno = SEM_ESTRUTURA_AUXILIAR;

        k = ContTodosVetores();

        if(k == 0){

            retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

        }

    }else{

        for(i = 0; i<qtd; i++){
            vetorAux[i] = Vetores[posicao].vetor[i];
        }
        retorno = OrdenarVetorEspecifico(posicao, vetorAux);
    }

    return retorno;
}


/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
    int retorno = 0;

    int i;
    int j;
    int k;
    int x = 0;
    int aux = 0;

    for(i = 0; i < 10; i++){

        if(Vetores[i].aux == 0){

            x++;

        }
    }

    k = ContTodosVetores();

    if(k == 0){

    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

    if(x == 10){

      retorno = SEM_ESTRUTURA_AUXILIAR;

      }

    }else{

        for(i= 0; i < 10; i++){

            for(j = 0; j < Vetores[i].quantidade; j++){

            vetorAux[aux] = Vetores[i].vetor[j];
            aux++;  

            }
        }

        retorno = SUCESSO;
    } 

    return retorno;
}


/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
    int retorno = 0;
    int QtdTotal = 0; 
    int k;

    k = ContTodosVetores();

    retorno = getDadosDeTodasEstruturasAuxiliares(vetorAux);

    if(k == 0){

    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

    }else if(retorno == SUCESSO){

    QtdTotal = QtdTotalEstruAux();
    OrdenacaoDeTodosVetores(QtdTotal, vetorAux);

    }else{

    retorno = SEM_ESTRUTURA_AUXILIAR;

    }

  return retorno;
}


/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{
    int retorno = 0;

    if(posicao < 1 || posicao > 10){

      retorno = POSICAO_INVALIDA;

    }else if(Vetores[posicao].aux == 0){

      retorno = SEM_ESTRUTURA_AUXILIAR;

    }else if(novoTamanho < -90){

      retorno = NOVO_TAMANHO_INVALIDO;

    }else{

      novoTamanho = Vetores[posicao].tam + novoTamanho;
      Vetores[posicao].vetor = (int *) realloc(Vetores[posicao].vetor, novoTamanho * sizeof(int));
      Vetores[posicao].tam = novoTamanho;

        if(Vetores[posicao].quantidade > novoTamanho){

            Vetores[posicao].quantidade = novoTamanho;
        }

      retorno = SUCESSO;

    }

    if(!Vetores[posicao].vetor){

      retorno = SEM_ESPACO_DE_MEMORIA;

    }

    return retorno;
}


/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{
    int qtd;

    qtd = Vetores[posicao].quantidade;

    return qtd;
}


//Função auxiliar para ordenar os Vetores
int OrdenarVetorEspecifico(int posicao, int vetorAux[]){

  int i;
  int retorno;
  int qtd;
  int j;
  int troca;
  int menor;

  qtd = getQuantidadeElementosEstruturaAuxiliar(posicao);

  for(i=0; i < qtd-1; i++){

    menor = i;

    for (j=i+1; j < qtd; j++){

        if (vetorAux[j] < vetorAux[menor]){

             menor = j;
        }
    }

    if (menor != i){

         troca = vetorAux[i];
         vetorAux[i] = vetorAux[menor];
         vetorAux[menor] = troca; 

    }
}
    retorno = SUCESSO;

    return retorno;
}


//Função auxiliar para ordenar TODOS os Vetores
int OrdenacaoDeTodosVetores(int QtdTotal, int vetorAux[]){

    int i;
    int retorno;
    int j;
    int troca;
    int menor;

    for(i=0; i < QtdTotal-1; i++){

        menor = i;

        for (j=i+1; j < QtdTotal; j++){

            if (vetorAux[j] < vetorAux[menor]){

                menor = j;

            }
        }

        if (menor != i){

            troca = vetorAux[i];
            vetorAux[i] = vetorAux[menor];
            vetorAux[menor] = troca;

        }
    }
}


/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote()
{

    return NULL;
}
/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
}
/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.
Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
}

/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.
*/
void finalizar()
{
    int i = 10;

    while (i > 0){

        free (Vetores[i].vetor);
        i--;

    }
}