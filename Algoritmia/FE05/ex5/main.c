/*********************************
**    Nome: Crescente Par		**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void crescPar(int num, int max);
void crescPar(int num, int max)
{
    if (num % 2 == 0)
    {
        if (num == max)
            printf(" %d", max);
        else
        {
            printf(" %d", num);
            crescPar(num + 1, max);
        }
    }
    else
    {
        crescPar(num + 1, max);
    }
}

void main()
{
    int num;
    printf("Numero par: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        crescPar(0, num);
    else
        printf("Erro");
}