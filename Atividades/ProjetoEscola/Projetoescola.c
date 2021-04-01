#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

//Declaração de funções do menu de cadastro
void Cadastrar();
void CadastrarAluno();
void CadastrarProfessor();
void CadastrarDisciplina();

//Declaração de funções do menu de Inserção
void Inserir();
void InserirAluno();
void InserirProfessor();

//Declaração de funções do menu de listagem
void Listar();
void ListarAluno();
void ListarProfessor();
void ListarDisciplina();

//Declaração de funções do menu de exclusão
void Excluir();
void ExcluirAluno();
void ExcluirProfessor();
void ExcluirAlunoDisc();
void ExcluirProfDisc();
void ExcluirDisciplina();

//Declaração de funções para atualização de cadastro
void Atualizar();
void AtualizarProfessor();
void AtualizarAluno();
void AtualizarDisciplina();

//Struct para cadastrar data de nascimento
struct CadastroNascimento
{
    int Dia;
    int Mes;
    int Ano;
};

//Struct para cadastro de alunos
struct CadastroAluno
{
    char Nome[30], Matricula[10];
    int Sexo;
    int Cpf;
    int Flag1, Flag2;
    struct CadastroNascimento Nascimento;
    
}Aluno[MAX];

//Struct para cadastro de professores
struct CadastroProfessor
{
    char Nome [30], Matricula[10];
    int Sexo;
    int Cpf;
    int Flag1, Flag2;
    struct CadastroNascimento Nascimento;

}Professor[MAX];

//Struct para cadastro de disciplina
struct CadastroDisciplina
{
    char Nome [30], Codigo[10];
    int Semestre;
    int Flag1;

}Disciplina[MAX];



//BlOCO MAIN (Principal), INTERAÇÃO DO PROGRAMA

int main(void)
{

    int opcao;

    do
    {
        system("Cls");

        printf("\n -----Bem Vindo Ao Projeto Escola-----\n");
        printf("\n Digite 1 Para Cadastrar:\n");
        printf("\n Digite 2 Para Inserir:\n");
        printf("\n Digite 3 Para Listar:\n");
        printf("\n Digite 4 Para Atualizar:\n");
        printf("\n Digite 5 Para Excluir:\n");
        printf("\n Digite 0 Para Sair:\n");

        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            
            case 1:
            //Cadastrar();
            break;

            case 2:
            //Inserir();
            break;

            case 3:
            //Listar();
            break;

            case 4:
            //Atualizar();
            break;

            case 5:
            //Excluir();
            break;

            default:
            printf("\nOpcao Invalida\n");
            break;
        }
        getchar();

    }while(opcao != 0);
    
    return 0;
}