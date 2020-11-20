/********************************\
**    Nome: Moedas Troco        **
**    Autor: Roberto Barreto    **
**    Data: 27/10/2020          **
\********************************/

#include<stdio.h>
#include<math.h>

int main()
{
    double valor;
    int result;

    printf("Introduza o valor: ");scanf("%lf",&valor);
    //dividir o valor por 2 para saber quantas moedas de 2€ sao necessarias
    result = valor / 2;
    if(result!=0)
        printf("%d moedas de 2 euros\n",result);
    //fazer o resto da divisao do valor por 2€ para saber quanto dinheiro restou para dividir pelas moedas
    valor = fmod(valor, 2);

    result = valor / 1;
    if(result!=0)
        printf("%d moedas de 1 euros\n",result);
    valor=fmod(valor,1);

    result = valor / 0.5;
    if(result!=0)
        printf("%d moedas de 50 centimos\n",result);
    valor=fmod(valor,0.5);

    result = valor / 0.2;
    if(result!=0)
        printf("%d moedas de 20 centimos\n",result);
    valor=fmod(valor,0.2);

    result = valor / 0.1;
    if(result!=0)
        printf("%d moedas de 20 centimos\n",result);
    valor=fmod(valor,0.1);

    result = valor / 0.05;
    if(result!=0)
        printf("%d moedas de 5 centimos\n",result);
    valor=fmod(valor,0.05);

    result = valor / 0.02;
    if(result!=0)
        printf("%d moedas de 2 centimos\n",result);
    valor=fmod(valor,0.02);

    result = valor / 0.01;
    if(result!=0)
        printf("%d moedas de 1 centimo\n",result);
    valor=fmod(valor,0.01);

    
}
