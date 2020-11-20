/***********************************\
**    Nome: calculo aumentos       **
**    Autor: Roberto Barreto       **
**    Data: 24/10/2020             **
\***********************************/


#include<stdio.h>

int main(int argc, char const *argv[])
{
    //var1->variavel base; _var1->variavel que vai tomar o valor da var2 para nao sobrepor a variavel
    int var1,_var1,var2,_var2;

    //receber os valores das duas variaveis
    printf("introduza o valor da primeira variavel: ");
    scanf("%d", &var1);

    printf("introduza o valor da segunda variavel: ");
    scanf("%d", &var2);
    
    //troca das variaveis
    _var1=var2;
    _var2=var1;

    //apresentação da troca ao utilizador
    printf("A primeira variavel tornou-se %d e a segunda variavel tornou-se %d",_var1,_var2);

    return 0;
}
