/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

int somatorio(int min, int max);
int somatorio(int min, int max)
{
    int soma = 0;
    for (int i = min; i <= max; i++)
        soma += i;

    return soma;
}

void main()
{
    int n1, n2;
    printf("Intervalo: ");
    scanf("%d %d", &n1, &n2);
    printf("resultado: %d", somatorio(n1, n2));
}