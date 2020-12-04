#include<stdio.h>

int calculaFatorial(int n);

int calculaFatorial(int n){
    if(n==0)
        return 0;
    else
        return (n*calculaFatorial(n-1));
}


void main(){

    int n;

    printf("Introduza o seu numero: ");scanf("%d",&n);

    printf("\nO resultado do fatorial de %d e: %d",n,calculaFatorial(n));

}