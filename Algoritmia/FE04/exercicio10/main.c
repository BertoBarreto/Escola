/*********************************
**    Nome: calculaFatorial     **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include <stdio.h>

int calculaFatorial(int n);

int calculaFatorial(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}

void main()
{

    int n;

    printf("Introduza o seu numero: ");
    scanf("%d", &n);

    printf("O resultado do fatorial de %d e: %d", n, calculaFatorial(n));
}