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

int troca(int *vetor, int quantidade)
{
    int contador = 0;
    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i] % 2 == 0)
            vetor[i] = 1;
        else
            vetor[i] = -1;
    }
    return contador;
}
void imprimir(int *vetor, int quantidade)
{
    printf("\n Vetor:");
    for (int i = 0; i < quantidade; i++)
    {
        printf("\n\tNumero %d -> %d", vetor[i]);
    }
}
void main()
{
    int quantidade, num;
    printf("Intruduza a quantidade de numeros a colocar: ");
    scanf("%d", &quantidade);
    int numeros[quantidade];
    lerNumeros(numeros, quantidade);
    imprimir(numeros, quantidade);
}