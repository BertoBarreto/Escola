/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 15/12/2020			**
**********************************/

#include <stdio.h>

int somatorio(int num, int max);
int somatorio(int num, int max)
{
    if (num > max)
        return 0;
    else
        return num + somatorio(num + 1, max);
}

void main()
{
    int n1, n2;
    printf("Intervalo: ");
    scanf("%d %d", &n1, &n2);
    printf("resultado: %d", somatorio(n1, n2));
}