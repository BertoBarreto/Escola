/************************************************\
**    Nome: Trabalho de grupo ex4               **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 1/11/2020                           **
\************************************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int comp,desconto;
    char gen;

    printf("Comprimento?");scanf(" %d",&comp);
    printf("Genero?");scanf(" %c",&gen);

    switch(gen){
        case 'f':
        case 'F':
            if(comp>=6 && comp<10){
                desconto = 10;
                break;
            }
            else if(comp>=15 && comp<18){
                desconto = 8;
                break;
            }
            else if(comp>=18 && comp<25){
                desconto = 7;
                break;
            }
        case 'm':
        case 'M':
            if(comp>=10 && comp<15){
                desconto = 9;
                break;
            }
                
            else if(comp>=18 && comp<25){
                desconto = 7;
                break; 
            }
        default : desconto = 5;

    }

    printf("O desconto final e: %d%%",desconto);

    return 0;
}
