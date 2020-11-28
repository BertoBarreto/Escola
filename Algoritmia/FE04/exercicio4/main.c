#include<stdio.h>

int imprimeNumeros(int numero);

int imprimeNumeros(int numero){
    int contador = 1;
    while(contador<=numero){
        printf("%d ",contador);
        contador++;
    }
}

void main(){

    int num;

    printf("Introduza um numero: ");scanf("%d", &num);
    imprimeNumeros(num);

}