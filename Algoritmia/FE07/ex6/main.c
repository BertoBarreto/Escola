/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 05/01/2021			**
**********************************/

#include <stdio.h>

void lerNumeros(int *vetor, int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("Introduza o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int quantidadeAparece(int *vetor, int quantidade)
{
    int contar = 0;
    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i] < 0)
            contar++;
    }
    return contar;
}

void main()
{
    int quantidade, num;
    printf("Intruduza a quantidade de numeros a colocar: ");
    scanf("%d", &quantidade);
    int numeros[quantidade];
    lerNumeros(numeros, quantidade);
    printf("Existem %d numeros negativos no vetor", quantidadeAparece(numeros, quantidade));
}