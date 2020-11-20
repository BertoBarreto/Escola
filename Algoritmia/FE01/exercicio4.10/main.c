/***********************************\
**    Nome: calculo aumentos       **
**    Autor: Roberto Barreto       **
**    Data: 24/10/2020             **
\***********************************/


#include<stdio.h>

int main(int argc, char const *argv[])
{
    float salario,salarioF;

    //ir buscar o valor inicial do salario
    printf("introduza o valor do salario: ");
    scanf("%f", &salario);

    //calculo do aumento de 25% do salario
    salarioF=salario+(0.25*salario);

    //apresentação do valor final do salario ao utilizador
    printf("O salario de %.2f euros recebeu um aumento e agora e %.2f euros",salario,salarioF);

    return 0;
}
