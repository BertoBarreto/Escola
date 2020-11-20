/********************************\
**    Nome: Salario             **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float salario,salarioMin,salarioF,irs;

    irs=0.035;
    salarioMin=635;

    printf("Introduza o seu salario: ");scanf("%f",&salario);

    if(salario<=salarioMin)
        salarioF=salario;
    else
        salarioF=salario-(salario*irs);
    
    printf("O valor final do seu ordenado e %.2f euros",salarioF);


    return 0;
}