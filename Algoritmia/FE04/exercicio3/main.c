/*********************************
**    Nome: Soma                **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include<stdio.h>
#include<ctype.h>


int soma(int n1,int n2);
float divisor(float dividendo, float divisor);

int soma(int n1, int n2){
    return n1+n2;
}

float divisor(float dividendo, float divisor){
    return dividendo/divisor;
}

void main(){

    int idade,contador=0,total;
    char escolha;

    do{
        printf("Idade?");scanf("%d",&idade);
        if(contador==0)
            total=idade;
        else
            total=soma(idade,total);
        printf("Deseja sair?(S/N)");scanf(" %c",&escolha);
        contador++;
    }while(toupper(escolha)=='N');
    
    printf("A media e: %.2f",divisor((float)total,(float)contador));

}