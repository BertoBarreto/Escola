#include <stdio.h>
#include <string.h>

int main(){
   char p[50];
   char p_[50];
   int verifica,n1,n2,prod,melhorCap=0,i=0;

   printf("introduza os nums(n1/n2):");scanf("%d %d",&n1,&n2);
   prod=n1*n2;
   for(i=1;i<=prod+1;i++){
      sprintf(p,"%d",i);
      sprintf(p_,"%d",i);

      strrev(p_);

      verifica=strcmp(p,p_);
     
      if(verifica==0)
         melhorCap=i; 

   }

   printf("Maior capicua:%d",melhorCap);
   // puts(strrev(p));

   return 0;
}