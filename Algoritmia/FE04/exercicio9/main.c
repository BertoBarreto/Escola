#include<stdio.h>

int calculaSomatorio(int n);

int calculaSomatorio(int n){
    int resultado=0;
    for(int i=1;i<=n;i++){
        resultado+=i;
    }
    return resultado;
}


void main(){

    int n;

    printf("Introduza o seu numero: ");scanf("%d",&n);

    printf("O resultado do somatorio de %d e: %d",n,calculaSomatorio(n));

}