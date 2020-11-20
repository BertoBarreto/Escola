/********************************\
**    Nome: Media de 3 notas    **
**    Autor: Roberto Barreto    **
**    Data: 23/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int nota1,nota2,nota3;
    float peso1,peso2,peso3,media;

    //ir buscar notas
    printf("introduza a primeira nota: ");
    scanf("%d", &nota1);

    printf("introduza o peso da primeira nota em valores decimais: ");
    scanf("%f", &peso1);

    printf("introduza a segunda nota: ");
    scanf("%d", &nota2);

    printf("introduza o peso da segunda nota em valores decimais: ");
    scanf("%f", &peso2);

    printf("introduza a terceira nota: ");
    scanf("%d", &nota3);
    
    printf("introduza o peso da terceira nota em valores decimais: ");
    scanf("%f", &peso3);

    //media das notas ou seja a soma das 3 notas multiplicando pelos seus pesos
    media=(nota1*peso1)+(nota2*peso2)+(nota3*+peso3);

    //amostra da media ao utilizador
    printf("A sua media e:  %f", media);

    return 0;
}
