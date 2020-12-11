/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void decrescPar(int num);
void decrescPar(int num)
{
    if (num % 2 == 0)
    {
        if (num == 0)
            printf(" 0");
        else
        {
            printf(" %d", num);
            decrescPar(num - 1);
        }
    }
    else
        decrescPar(num - 1);
}
void main()
{
    int num;
    printf("Numero par: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        decrescPar(num);
    else
        printf("Erro");
}