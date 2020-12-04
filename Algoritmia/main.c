#include<stdio.h>
#include<ctype.h>

float soma(float n1, float n2);
float divisao(float dividendo, float divisor);

float soma(float n1, float n2)
{
     return n1+n2;

}

float divisao(float dividendo, float divisor)
{
      return dividendo/divisor;
}

void main()
{float n1, n2;
 float somatorio=0, i=0;
 char resposta;
 float media;

   do
   {printf("Qual o valor de n1? ");
   scanf("%f", &n1);

   printf("Qual o valor de n2? ");//tou a pedir duas variaveis de cada vez
   scanf("%f", &n2);

   somatorio = somatorio + soma(n1,n2);
   
   i++;
   printf("Deseja continuar? ");
   scanf(" %c", &resposta);

   }while(toupper(resposta)=='S');//= atribuir valores a variaveis
                                  //== comparar se duas variaveis sao iguais - dentro das condicoes e sempre ==
                                  //serve para a pessoa dizer se quer sair ou nao
    printf("\nSomatorio: %f",somatorio);
    printf("\ni: %f",i);
    media = divisao(somatorio,i);//olha para a funcao e nao para o return - dentro das funcoes so se usa virgulas

    printf("\nA media da idade e igual a %.2f", divisao(somatorio,i));
}
