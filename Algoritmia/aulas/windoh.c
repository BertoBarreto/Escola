/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 17/12/2020			**
**********************************/

#include <stdio.h>

void alterarASptr(int a)
{
    a = 10;
}

void alterarA(int *ptr)
{
    *ptr = 1200;
}

void main()
{

    int a = 9;
    printf("%d", a);
    alterarA(&a);
    printf("\n%d", a);
    a = 9;
    printf("\n\n%d", a);
    alterarASptr(a);
    printf("\n%d", a);
}