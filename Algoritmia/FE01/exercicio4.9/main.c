/***********************************\
**    Nome: euros to dolares       **
**    Autor: Roberto Barreto       **
**    Data: 24/10/2020             **
\***********************************/


#include<stdio.h>

int main(int argc, char const *argv[])
{
    float euros,dolares;

    //ir buscar o valor do utilizador
    printf("introduza o valor em euros: ");
    scanf("%f", &euros);
    
    //formula de conversao de dolares em euros, estando esta atualizada no dia 24, valendo 1€, 1.19$
    dolares=euros*1.19;

    //apresentação dos valores ao utilizador
    printf("%.2f euros sao %.2f dolares",euros,dolares);

    return 0;
}
