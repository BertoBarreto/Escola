/************************************************\
**    Nome: Trabalho de grupo ex2               **
**    Autor: Vincent Rebena - Roberto Barreto   **
**    Data: 1/11/2020                           **
\************************************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int ano;

    printf("Introduza o Ano: ");scanf("%d",&ano);

    if((ano%4==0 && ano%100!=0)||ano%400==0)
        printf("Ano Bissexto");
    else
        printf("Nao e ano Bissexto");

    return 0;
}
