/*********************************
**    Nome: Fatorial            **
**    Autor: Roberto Barreto    **
**    Data: 21/11/2020          **
**********************************/
#include<stdio.h>

void main(){

    int num,resultado=1,i;

    printf("Introduza o seu numero: ");scanf("%d",&num);
    printf("Fatorial de %d: ",num);
    for(i=1;i<=num;i++){
        resultado*=i;
        if(i==num)
            printf(" %d",i);
        else
            printf(" %d x",i);
    }

    printf("\nResultado Fatorial: %d",resultado);

}