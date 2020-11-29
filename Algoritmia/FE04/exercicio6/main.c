/*********************************
**    Nome: imprimeNumeros      **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include<stdio.h>

void verificaPar(int numero);

void verificaPar(int numero){
    if((numero%2)==0){
        printf("Numero par\n");
    }else{
        printf("Numero impar\n");
    }
}

void main(){

    int num;
    do{
        printf("Introduza o seu numero: ");scanf("%d",&num);    
        verificaPar(num);
    }while(num>=0);
}