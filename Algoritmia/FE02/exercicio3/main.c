/********************************\
**    Nome: Aprovado/Reprovado  **
**    Autor: Roberto Barreto    **
**    Data: 27/10/2020          **
\********************************/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float nota;
    printf("Introduza a sua nota: ");scanf("%f",&nota);
    //verificar se a nota e maior ou igual a 9.5, se for o aluno esta aprovado, senao reprovado
    if(nota>=9.5)
        printf("Aprovado");
    else
        printf("Reprovado");
    
    return 0;
}