/***********************************\
**    Nome: fahrenheit to celcius  **
**    Autor: Roberto Barreto       **
**    Data: 24/10/2020             **
\***********************************/


#include<stdio.h>

int main(int argc, char const *argv[])
{
    float grausF,grausC;

    //ir buscar os graus
    printf("introduza os graus em Fahrenheit: ");
    scanf("%f", &grausF);
    
    //conversao em graus celcius
    grausC=(grausF-32)*5/9;

    //apresentação do valor ao utilizador
    printf("Sao %.2f C",grausC);

    return 0;
}
