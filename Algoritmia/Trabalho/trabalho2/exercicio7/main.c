/************************************************\
**    Nome: Trabalho de grupo 2                 **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 15/11/2020                          **
\************************************************/

#include<stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char gen,escolhaCurso,escolha;
    int idade,contador=0,contadorF=0,contadorM=0,contadorMEx=0,limiteIdade=20;
    float percentagemF=0.0f,percentagemM=0.0f;

    while (1)
    {
        printf("Genero:(F/M)");scanf(" %c",&gen);
        gen=toupper(gen);

        switch(gen){
            case 'F':   contadorF++;
                    break;
            case 'M':   contadorM++;
                    break;
        }

        printf("Idade: ");scanf("%d",&idade);
        printf("Esta a gostar do seu curso?(S/N)");scanf(" %c",&escolhaCurso);

        if((gen=='M')&&(idade<limiteIdade)&&(toupper(escolhaCurso)=='N')){
            contadorMEx++;
        }

        contador++;

        printf("Deseja entrevistar outra pessoa?(S/N)");scanf(" %c",&escolha);
            if((toupper(escolha)!='S')){
                break;
            }
    }
    percentagemF=(float)contadorF/(float)contador;
    percentagemM=(float)contadorM/(float)contador;

    percentagemF=percentagemF*100;
    percentagemM=percentagemM*100;

    printf("\nNumero de estudantes entrevistados: %d",contador);
    printf("\nPercentagens de genero:");
    printf("\n\tFeminino: %.2f%%",percentagemF);
    printf("\n\tMasculino: %.2f%%",percentagemM);
    printf("\nNumero de estudantes do genero Masculino com menos de 20 anos que nao gostam do seu curso e: %d",contadorMEx);
    
    return 0;
}
