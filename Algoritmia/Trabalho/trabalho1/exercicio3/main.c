/************************************************\
**    Nome: Trabalho de grupo ex3               **
**    Autor: Vincent Rebena - Roberto Barreto   **
**    Data: 1/11/2020                           **
\************************************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float mat,pt,ing,geo,media;

    printf("Nota Matematica?");scanf("%f",&mat);
    printf("Nota Portugues?");scanf("%f",&pt);
    printf("Nota Ingles?");scanf("%f",&ing);
    printf("Nota Geografia?");scanf("%f",&geo);

    media=(mat+pt+ing+geo)/4;

    if(media>=9.5)
        printf("Aprovado\nMedia: %.f",media);
    else
        printf("Reprovado\nMedia: %.f",media);

    return 0;
}