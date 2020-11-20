/*******************************************\
**    Nome: calculo aumentos com imposto   **
**    Autor: Roberto Barreto               **
**    Data: 24/10/2020                     **
\*******************************************/


#include<stdio.h>

int main(int argc, char const *argv[])
{
    //sendo salarioB->salario Base; salarioA->salario com aumento; salarioF->salario final
    float salarioB,salarioA,salarioF;

    //ir buscar o salario base
    printf("introduza o valor do salario: ");
    scanf("%f", &salarioB);
    
    //calculo do salario com aumento de 5%
    salarioA=salarioB+(0.05*salarioB);

    //calculo do valor final do salario com importo de 7%
    salarioF=salarioA-(salarioB*0.07);

    //apresentação do valor inicial do salario, do valor com aumento e do valor final com o imposto e o aumento aplicados
    printf("O salario de %.2f euros recebeu um aumento e agora e %.2f euros, com imposto tem um valor final de %.2f euros",salarioB,salarioA,salarioF);

    return 0;
}
