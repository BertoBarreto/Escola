/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 00/00/2020			**
**********************************/

#include <stdio.h>

int fatorial(int num);
int fatorial(int num)
{
    printf(" %d x", num);
    if (num == 0)
        return 1;
    else
        return num * fatorial(num - 1);
}

void main()
{
    int num;
    printf("Introduza o numero: ");
    scanf("%d", &num);
    printf("\nFatorial de %d e %d", num, fatorial(num));
}