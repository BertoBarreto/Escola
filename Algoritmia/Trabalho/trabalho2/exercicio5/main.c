/************************************************\
**    Nome: Trabalho de grupo 2                 **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 15/11/2020                          **
\************************************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,contador=1,resultado=0;    

    printf("Introduza o numero: ");scanf("%d",&num);

    //Enquanto contador menor que o valor do numero somar
    while(contador<=num){

        resultado+=contador;

        contador++;
    }

    printf("O somatorio do numero que colocou e: %d",resultado);

    return 0;
}

