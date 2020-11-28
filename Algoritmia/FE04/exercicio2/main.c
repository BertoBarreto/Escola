/*********************************
**    Nome: Media                **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include<stdio.h>

float media(float n1,float n2,float n3);

float media(float n1,float n2,float n3){
    return (n1+n2+n3)/3;
}

void main(){

    int n1,n2,n3;

    printf("Introduza os 3 numeros: ");scanf("%d %d %d",&n1,&n2,&n3);

    printf("A media de %d, %d, %d e: %.2f",n1,n2,n3,media((float)n1,(float)n2,(float)n3));
}