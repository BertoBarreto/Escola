/********************************\
**    Nome: Numero 33           **
**    Autor: Roberto Barreto    **
**    Data: 27/10/2020          **
\********************************/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("Introduza um numero: ");scanf("%d",&num);

    //verificar se o numero introduzido e 33 e dizer ao utilizador se o numero e 33 ou nao
    if(num!=33)
        printf("O numero e diferente de  33");
    else
        printf("O numero e 33");
    return 0;
}
