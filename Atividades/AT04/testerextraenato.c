#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void pegarvetor(int vet[10])
{

    int i;

    printf("Informe os numeros a serem preenchidos no vetor de 10 posicoes:\n");

    for (i = 0; i < 10; i++)

        scanf("%d", &vet[i]);

    fflush(stdin);
}

void medirvet(int vet[10])
{

    int j, i, aux;

    for (i = 0; i < 10; i++)
    {

        for (j = i + 1; j < 10; j++)
        {

            if (vet[i] > vet[j])
            {

                aux = vet[i];

                vet[i] = vet[j];

                vet[j] = aux;
            }
        }
    }
}

void imprimirvetor(int vet[10])
{

    printf("O menor numero do vetor eh: %d\n", vet[0]);
    printf("O maior numero do vetor eh: %d\n", vet[9]);
}

int main()
{

    int vetor[10];

    pegarvetor(vetor);

    medirvet(vetor);

    imprimirvetor(vetor);

    return 0;
}
