/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void crescPar(int num);
void crescPar(int num)
{
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d", i);
        }
    }
}

void main()
{
    int num;
    printf("Numero par: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        crescPar(num);
    else
        printf("Erro");
}