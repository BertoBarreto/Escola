/********************************\
**    Nome: Carta de condução   **
**    Autor: Roberto Barreto    **
**    Data: 20/10/2020          **
\********************************/

#include <stdio.h>

void main(){
    int anoNascimento, idade, anosFalta;

    printf("Introduza o ano de nascimento: ");
    scanf("%d\n", &anoNascimento);

    idade= 2020-anoNascimento;

    if(idade >= 18)
        printf("Pode tirar a carta");
    else{
        anosFalta = 18-idade;
        printf("Nao pode tirar a carta, faltam: %d anos", anosFalta);
    }
}