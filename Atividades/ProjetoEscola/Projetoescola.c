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
    char Nome[30], Matricula[10], Cpf[20];
    int Sexo;
    int Flag1, Flag2;
    struct CadastroNascimento Nascimento;
    
}Aluno[MAX];

//Struct para cadastro de professores
struct CadastroProfessor
{
    char Nome [30], Matricula[10], Cpf[20];
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
            if(Aluno[i].Flag1 == 0)
            {

                printf("\nNome: ");
		        fgets(Aluno[i].Nome, sizeof(Aluno[i].Nome), stdin); 
                printf("\nMatricula: ");
		        fgets(Aluno[i].Matricula, sizeof(Aluno[i].Matricula), stdin);
                fflush(stdin);
                printf("\nCPF: ");
		        fgets(Aluno[i].Cpf, sizeof(Aluno[i].Cpf), stdin);
                
                //VALIDAÇÃO DO CPF
                cont=0;
                while(Aluno[i].Cpf[cont] != '\n'){
                cont++;
                }

                if(cont>11)
                {
                printf("\n CPF INVALIDO\n");

                    do{
                        printf("\nCPF: ");
		                fgets(Aluno[i].Cpf, sizeof(Aluno[i].Cpf), stdin);
                        fflush(stdin);
                        cont=0;   
                        while(Aluno[i].Cpf[cont] != '\n'){
                        cont++;
                        }
                        if(cont>11){
                        printf("\n CPF INVALIDO\n");
                        } 
                    }while(cont>11);
                }
                
                printf("\nSexo:\n \n1-Masculino\n \n2-Feminino\n \n3-Outros\n\n");
                scanf("%d", &Aluno[i].Sexo);
                fflush(stdin);//FIM DA VALIDAÇÃO DO CPF


                //VALIDAÇÃO DO SEXO
                while((Aluno[i].Sexo < 1) || (Aluno[i].Sexo > 3)){
                    printf("\nOpcao invalida\n");
                    printf("\nSexo:\n \n1-Masculino\n \n2-Feminino\n \n3-Outros\n\n");
                    scanf("%d", &Aluno[i].Sexo);
                    fflush(stdin);
                }//FIM DA VALIDAÇÃO DO SEXO
                


                //VALIDAÇÃO DE DATA DE NASCIMENTO COM ANO BISSEXTO
                do
                {
                printf("\nData de nascimento\n");
                printf("\nDia: ");
                scanf("%d", &Aluno[i].Nascimento.Dia);
                fflush(stdin);
                printf("\nMes: ");
                scanf("%d", &Aluno[i].Nascimento.Mes);
                fflush(stdin);
                printf("\nAno: ");
                scanf("%d", &Aluno[i].Nascimento.Ano);
                fflush(stdin);

                cont=0;

                    if(Aluno[i].Nascimento.Ano >= 1900 && Aluno[i].Nascimento.Ano <= 9999){

                        if(Aluno[i].Nascimento.Mes >= 1 && Aluno[i].Nascimento.Mes <= 12){

                            if((Aluno[i].Nascimento.Dia >= 1 && Aluno[i].Nascimento.Dia <= 31) && (Aluno[i].Nascimento.Mes == 1 || Aluno[i].Nascimento.Mes == 3 || Aluno[i].Nascimento.Mes == 5 || Aluno[i].Nascimento.Mes == 7 || Aluno[i].Nascimento.Mes == 8 || Aluno[i].Nascimento.Mes == 10 || Aluno[i].Nascimento.Mes == 12)){
                            cont++;
                            }
                            else if((Aluno[i].Nascimento.Dia >= 1 && Aluno[i].Nascimento.Dia <= 30) && (Aluno[i].Nascimento.Mes == 4 || Aluno[i].Nascimento.Mes == 6 || Aluno[i].Nascimento.Mes == 9 || Aluno[i].Nascimento.Mes == 11)){
                            cont++;
                            }
                            else if((Aluno[i].Nascimento.Dia >= 1 && Aluno[i].Nascimento.Dia <= 28) && (Aluno[i].Nascimento.Mes == 2)){
                            cont++;
                            }
                            else if(Aluno[i].Nascimento.Dia == 29 && Aluno[i].Nascimento.Mes == 2 && (Aluno[i].Nascimento.Ano % 400 == 0 || (Aluno[i].Nascimento.Ano % 4 == 0 && Aluno[i].Nascimento.Ano % 100 != 0))){
                            cont++;
                            }
                            else
                            {
                            printf("\nO formato da data de nascimento esta invalida.\n");
                            }
                        }
                        else
                        {
                        printf("\nO formato da data de nascimento esta invalida.\n");
                        }    
                    }
                    else
                    {
                    printf("\nO formato da data de nascimento esta invalida.\n");
                    }    

                }while(cont != 1); //FIM DA VALIDAÇÃO DA DATA DE NASCIMENTO
            
                Aluno[i].Flag1 = 1;  //INSERINDO O CADASTRO NA STRUCT ATRAVÉS DA FLAG  
                break;
            } 
        }

        printf("\n1 - Continuar cadastrando\n0 - Sair\n");
		scanf("%d", &opcao);
        fflush(stdin);
        getchar();

    }while(opcao != 0);
}

  