/*********************************
**    Nome: Recursiva Crescente **
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void crescente(int num);
void crescente(int num)
{
    if (num == 0)
        printf(" 0");
    else
    {
        printf(" %d", num);
        crescente(num - 1);
    }
}

void main()
{
    int num;
    printf("Numero:");
    scanf("%d", &num);
    crescente(num);
}