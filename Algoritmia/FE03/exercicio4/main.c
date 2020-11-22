#include<stdio.h>

void main(){

    int num,resultado=1,i;

    printf("Introduza o seu numero: ");scanf("%d",&num);
    printf("Fatorial de %d: 1 x",num);
    for(i=2;i<=num;i++){
        resultado*=i;
        if(i==num)
            printf(" %d",i);
        else
            printf(" %d x",i);
    }

    printf("\nResultado Fatorial: %d",resultado);

}