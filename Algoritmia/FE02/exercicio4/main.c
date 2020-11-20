/********************************\
**    Nome: Divisao sem 0       **
**    Autor: Roberto Barreto    **
**    Data: 27/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2;
    float resultado;
    
    printf("Introduza o primeiro numero: ");scanf("%d",&num1);
    printf("Introduza o segundo numero: ");scanf("%d",&num2);

    //verificar se o divisor é diferente de 0, pois se for 0 a divisão nao é possivel
    if(num2!=0){
        resultado=num1/num2;
        printf("O resultado da expressao e: %.2f",resultado);
    }else{
        printf("0 nao pode se divisor");
    }
    return 0;
}
