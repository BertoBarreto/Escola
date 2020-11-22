/************************************************\
**    Nome: Trabalho de grupo 2                 **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 20/11/2020                          **
\************************************************/

#include <stdio.h>
#include <string.h>

int main(){
   char p[50];
   char p_[50];
   int verifica,n1,n2,prod,melhorCap=0,i=0;

   printf("introduza os nums(n1/n2):");scanf("%d %d",&n1,&n2);
   if((n1>=100)&&(n2>=100)){
      prod=n1*n2;
      //verficar todos os numeros até ao resultado do produto
      for(i=1;i<=prod;i++){
         //guardar o valor dos numeros em dois vetores
         sprintf(p,"%d",i);
         sprintf(p_,"%d",i);
         //inverter um vetor
         strrev(p_);
         //comparar se os dois vetores são iguais
         verifica=strcmp(p,p_);
      //caso sejam iguais a maior capicua e este valor
         if(verifica==0)
            melhorCap=i; 
      }

      printf("Maior capicua:%d",melhorCap);
   }else{
      printf("Erro");
   }

   return 0;
}