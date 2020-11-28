/*********************************
**    Nome: Soma                **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include<stdio.h>

int soma(int n1,int n2);

int soma(int n1, int n2){
    return n1+n2;
}

void main(){

    int n1,n2;
    printf("Introduza dois numeros: ");scanf("%d %d",&n1,&n2);

    printf("%d + %d = %d",n1,n2,soma(n1,n2));

}