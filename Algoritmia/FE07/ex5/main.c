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

int quantidadeAparece(int *vetor, int quantidade, int num)
{
    int contar = 0;
    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i] == num)
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
    printf("Introduza o numero a procurar: ");
    scanf("%d", &num);
    printf("O numero %d aparece %d vezes no array", num, quantidadeAparece(numeros, quantidade, num));
}