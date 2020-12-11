/***********************************
**    Nome: Recursiva Decrescente **
**    Autor: Roberto Barreto	  **
**    Data: 11/12/2020			  **
***********************************/

#include <stdio.h>

void decrescente(int num);
void decrescente(int num)
{
    if (num == 0)
        printf(" 0");
    else
    {
        printf(" %d", num);
        decrescente(num - 1);
    }
}

void main()
{
    int num;
    printf("Numero:");
    scanf("%d", &num);
    decrescente(num);
}