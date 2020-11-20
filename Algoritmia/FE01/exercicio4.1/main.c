/********************************\
**    Nome: Media Disciplinas   **
**    Autor: Roberto Barreto    **
**    Data: 23/10/2020          **
\********************************/

#include <stdio.h>

//autocolocação do main escrevendo main e clicando em tab
int main(int argc, char const *argv[])
{
    //variaveis de notas das disciplinas
    float notaPt, notaIng, notaMat, media;

    //nota de pt
    printf("Introduza a sua nota de Portugues: ");
    scanf("%f", &notaPt);

    //nota de Ing
    printf("Introduza a sua nota de Ingles: ");
    scanf("%f", &notaIng);

    //nota de Mat
    printf("Introduza a sua nota de Matematica: ");
    scanf("%2f", &notaMat);

    //calculo da media, ou seja a soma das notas a dividir por 3
    media=(notaPt+notaIng+notaIng)/3.0;

    //amostra da media para o utilizador final
    printf("A sua media e: %.2f", media);
    getchar();
    return 0;
}
