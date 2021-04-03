#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

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
    char Nome[30], Matricula[10], Cpf[11];
    int Sexo;
    int Flag1, Flag2;
    struct CadastroNascimento Nascimento;
    
}Aluno[MAX];

//Struct para cadastro de professores
struct CadastroProfessor
{
    char Nome [30], Matricula[10], Cpf[11];
    int Sexo;
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



//BlOCO MAIN (Menu Principal)
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
        printf("\n Digite 0 Para Encerrar:\n");

        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            
            case 1:
            Cadastrar();
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

        }
        getchar();

    }while(opcao != 0);
    
    return 0;
}


//Função Cadastro
void Cadastrar(){

     int opcao;

        do
        {
            system("Cls");

            printf("\n -----Bem Vindo Ao Sistema De Cadastramento-----\n");
            printf("\n Digite 1 Para Cadastrar Aluno:\n");
            printf("\n Digite 2 Para Cadastrar Professor:\n");
            printf("\n Digite 3 Para Cadastrar Disciplina:\n");
            printf("\n Digite 0 Para Encerrar:\n");

            scanf("%d", &opcao);
            getchar();

            switch(opcao){
            
            case 1:
            CadastrarAluno();
            break;

            case 2:
            //CadastrarProfessor();
            break;

            case 3:
            //CadastrarDisciplina();
            break;

            }
            getchar();

        }while(opcao != 0);
}


//Função CadastrarAluno - Subloco da função Cadastrar

void CadastrarAluno()
{

    int opcao, i, cont;

    do
    {
        system("Cls");

        for(i=0; i<MAX; i++)
        {
            if(Aluno[i].Flag1 == 0){

                printf("\nNome: ");
		        fgets(Aluno[i].Nome, sizeof(Aluno[i].Nome), stdin);
                printf("\nMatricula: ");
		        fgets(Aluno[i].Matricula, sizeof(Aluno[i].Matricula), stdin);

                printf("\nCPF: ");
		        fgets(Aluno[i].Cpf, sizeof(Aluno[i].Cpf), stdin);

                int cont=0;

                while(Aluno[i].Cpf[cont] != '\0'){
                cont++;
                    
                    if(cont>11)
                    {
                    printf("\n CPF INVALIDO\n");
                    }

                    while(cont>11)
                    {
                        printf("\nCPF: ");
		                fgets(Aluno[i].Cpf, sizeof(Aluno[i].Cpf), stdin);
                    }
                }
                
                
                printf("Sexo: \n1-Masculino\n \n2-Feminino\n \n3-Outros\n");
                scanf("%d", &Aluno[i].Sexo);
                fflush(stdin);

                while((Aluno[i].Sexo < 1) || (Aluno[i].Sexo > 3)){
                    printf("\nOpcao invalida\n");
                    printf("Sexo: \n1-Masculino\n \n2-Feminino\n \n3-Outros\n");
                    scanf("%d", &Aluno[i].Sexo);
                    getchar();
                }

                printf("\nData de nascimento\n");
                printf("\nDia: ");
                scanf("%d", &Aluno[i].Nascimento.Dia);
                printf("\nMes: ");
                scanf("%d", &Aluno[i].Nascimento.Mes);
                printf("\nAno: ");
                scanf("%d", &Aluno[i].Nascimento.Ano);
            }
        }

    }while(opcao != 0);
}

 