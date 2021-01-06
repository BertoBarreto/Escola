/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 21/12/2020			**
*********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randoms(int *vetor, int min, int max, int tamanhoVet)
{
    for (int i = 0; i <= tamanhoVet; i++)
    {
        vetor[i] = (rand() % (max - min + 1)) + min;
    }
}

void printVetor(int *vetor, int n)
{
    printf("\nVetor:");
    for (int i = 0; i <= n; i++)
        printf("\n\tNumero->%d : %d", i, vetor[i]);
}
void main()
{
    int tamanhoVet = 9, min = 0, max = 100;
    srand(time(0));

    int vetRandom[tamanhoVet];

    randoms(vetRandom, min, max, tamanhoVet);
    printVetor(vetRandom, tamanhoVet);
}