/***********************************\
**    Nome: calculo aumentos       **
**    Autor: Roberto Barreto       **
**    Data: 24/10/2020             **
\***********************************/


#include <stdio.h>
//inclusao da biblioteca de math.h para a realização da raiz
#include <math.h>

int main(int argc, char const *argv[])
{
    float c1,c2,h;

    //receber os catetos
    printf("introduza o valor do primeiro cateto: ");
    scanf("%f", &c1);

    printf("introduza o valor do segundo cateto: ");
    scanf("%f", &c2);

    //a formula de calculo da hipotenusa, hipotenusa = raiz de c1^2+c2^2, logo utilizando a função sqrt que realiza a raiz quadrada de um numero
    h=sqrt((c1*c1)+(c2*c2));

    //Amostra do valor da hipotenusa ao utilizador
    printf("A hipotenusa do seu triangulo e: %.4f",h);

    return 0;
}
