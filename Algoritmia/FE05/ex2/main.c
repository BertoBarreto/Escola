/*********************************
**    Nome: Fatorial Recursivo	**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

int fatorial(int num);
int fatorial(int num)
{

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
    printf("%d ! = ", num);
    for (int i = num; i >= 1; i--)
    {
        if (i == num)
            printf("%d", i);
        else
            printf(" x %d", i);
    }
    printf("\nFatorial de %d e %d", num, fatorial(num));
}