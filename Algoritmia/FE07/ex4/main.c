/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 05/01/2021			**
**********************************/

#include <stdio.h>

void lerNumeros(float *vetor, int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("Introduza o numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}
float maiorNumero(float *vetor, int quantidade)
{
    float maior = vetor[0];
    for (int i = 1; i < quantidade; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}
void main()
{
    int quantidade;
    printf("Intruduza a quantidade de numeros a colocar: ");
    scanf("%d", &quantidade);
    float numeros[quantidade];
    lerNumeros(numeros, quantidade);
    printf("O menor numero armazenado e: %.2f", maiorNumero(numeros, quantidade));
}