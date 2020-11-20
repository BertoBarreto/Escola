#include<stdio.h>

int main(int argc, char const *argv[])
{
    float valor1,valor2;

    printf("Introduza os dois valores separados por espaco: ");scanf("%f %f",&valor1,&valor2);

    if(valor1>valor2)
        printf("Primeiro valor e maior que o segundo");
    else
        printf("Segundo valor e maior que o primeiro");

    return 0;
}
