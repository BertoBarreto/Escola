/********************************\
**    Nome: Compras             **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float compras;

    printf("Introduza o valor das suas compras: ");scanf("%f",&compras);

    if(compras<=5000)
        printf("Cliente Normal");
    else if(compras<=20000)
        printf("Cliente Profissional");
    else 
        printf("Cliente Empresarial");

    return 0;
}
