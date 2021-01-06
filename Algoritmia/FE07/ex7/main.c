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

float media(int *vetor, int quantidade)
{
    float soma = 0, media;
    for (int i = 0; i < quantidade; i++)
    {
        soma += (float)vetor[i];
    }
    media = (float)soma / (float)quantidade;
    return media;
}

void main()
{
    int quantidade, num;
    printf("Intruduza a quantidade de numeros a colocar: ");
    scanf("%d", &quantidade);
    int numeros[quantidade];
    lerNumeros(numeros, quantidade);
    printf("A media e: %.2f", media(numeros, quantidade));
}