#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declaração de funções do menu de cadastro
void Cadastrar();
void CadastrarAluno();
void CadastrarProfessor();
void CadastrarDisciplina();

//Declaração de funções do menu de listagem
void Listar();
void ListarAluno();
void ListarProfessor();
void ListarDisciplina();

//Declaração de funções do menu de Inserção
void Inserir();
void InserirAluno();
void InserirProfessor();

//Declaração de funções do menu de exclusão
void ExcluirAluno();
void ExcluirProfessor();
void ExcluirAlunoDisc();
void ExcluirDisciplina();

//Declaração de funções para atualização de cadastro

void AtualizarProfessor();
void AtualizarAluno();
void AtualizarDisciplina();

//Struct para cadastro de alunos
struct CadastroAluno
{
    int Matricula;
    int Sexo;
    int Cpf;
    char Nome[30];

}Aluno;

//Struct para cadastro de professores

struct CadastroProfessor
{
    int Matricula;
    int Sexo;
    int Cpf;
    char Nome [30];

}Professor;



int main(void)
{
    int opcao;

    do{


    }
    
}