/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 00/00/2020			**
**********************************/

#include <stdio.h>

int fatorial(int num);
int fatorial(int num)
{
    int resultado = 1;
    for (int i = num; i >= 1; i--)
    {
        if (i == num)
            printf("%d! = %d ", i, i);
        else
            printf("x %d ", i);
        resultado *= i;
    }
    return resultado;
}

void main()
{
    int num;
    printf("Introduza o numero: ");
    scanf("%d", &num);
    printf("\n%d! = %d", num, fatorial(num));
}