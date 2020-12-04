#include<stdio.h>

void main(){

    int numero1,numero2;
    double valor, resultado;

    numero1= 1592;
    numero2=9821;
    valor= 159.65f;

    resultado = Calcula(&numero1,numero2,&valor);

    printf("\nValores das variaveis fora da funcao");
    printf("\n numero 1 %d \t\t(endereco: %d)",numero1,&numero1);
    printf("\n numero 2 %d \t\t(endereco: %d)",numero2,&numero2);
    printf("\n valor %d \t\t(endereco: %d)",valor,&valor);
    getchar();

}

double Calcula(int *numero1, int numero2, double *valor){
    *numero1 = 100;
    numero2 = 200;
    *valor=300;

    printf("\nValores das variaveis dentro da funcao");
    printf("\n numero 1 %d \t\t(endereco: %d)",*numero1,&numero1);
    printf("\n numero 2 %d \t\t(endereco: %d)",numero2,&numero2);
    printf("\n valor %d \t\t(endereco: %d)",*valor,&valor);

    return 0;

}