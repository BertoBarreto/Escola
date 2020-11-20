/********************************\
**    Nome: Antecessor Sucessor **
**    Autor: Roberto Barreto    **
**    Data: 23/10/2020          **
\********************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variaveis de numeros
    float num,antNum,dpNum;

    //leitura do numero colocado pelo utilizador
    printf("Introduza um numero: ");
    scanf("%f",&num);

    //antecessor é o numero anterior logo numero - 1
    antNum = num-1;
    //antecessor é o numero seguinte logo numero + 1
    dpNum = num+1;

    //amostra ao utilizador dos numeros
    printf("O antecessor do seu numero e %.2f e o seu sucessor e %.2f",antNum,dpNum);
    return 0;
}
