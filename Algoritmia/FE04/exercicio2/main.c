/*********************************
**    Nome: Media                **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include<stdio.h>

int media(int n1,int n2,int n3);

int media(int n1,int n2,int  n3){
    return (n1+n2+n3)/3;
}

void main(){

    int n1,n2,n3;

    printf("Introduza os 3 numeros: ");scanf("%d %d %d",&n1,&n2,&n3);

    printf("A media de %d, %d, %d e: %d",n1,n2,n3,media(n1,n2,n3));
}