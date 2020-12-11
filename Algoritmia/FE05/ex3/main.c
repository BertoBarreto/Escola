/*********************************
**    Nome: Recursiva Crescente **
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void crescente(int num, int max);
void crescente(int num, int max)
{

    if (num == max)
        printf(" %d", max);
    else
    {
        printf(" %d", num);
        crescente(num + 1, max);
    }
}

void main()
{
    int num;
    printf("Numero:");
    scanf("%d", &num);
    crescente(0, num);
}