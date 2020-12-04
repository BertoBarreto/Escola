#include<stdio.h>

int potencia(int num, int expoente);

int potencia(int num, int expoente){
    if(expoente == 0)
        return 1;
    else
        return (num*potencia(num,expoente-1));
    
}

void main(){

    int num, exp;

    printf("Introduza o numero e o expoente: ");scanf("%d %d",&num,&exp);
    printf("Resultado da potencia e: %d",potencia(num,exp));


}