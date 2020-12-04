/*********************************
**    Nome: Media               **
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
        printf("Idade?");scanf("%d",&idade);//14//15//18
        if(contador==0)
            total=idade;//total=14
        else
            total=soma(idade,total);//total=soma(15,14)//total=(18,29)
            
        printf("Deseja sair?(S/N)");scanf(" %c",&escolha);
        contador++;
    }while(toupper(escolha)=='N');
    
    printf("A media e: %.2f",divisor((float)total,(float)contador));

}