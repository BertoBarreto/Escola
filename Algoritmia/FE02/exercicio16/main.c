/********************************\
**    Nome: Futebol             **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Introduza a idade do atleta: ");scanf("%d",&idade);

    if(idade>=11 && idade<=15){
        if(idade==11 || idade==12)
            printf("Este atleta tem oferta da taxa de inscricao\n");
        
        printf("A categoria deste atleta e juvenil");
    
    }else if(idade >= 16 && idade <= 20)
        printf("A categoria deste atleta e Junior");

    else if(idade >= 21 && idade<=25)
        printf("A categoria deste atleta e Profissional");
    
    
    return 0;
}
