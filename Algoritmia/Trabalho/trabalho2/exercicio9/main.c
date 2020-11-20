#include <stdio.h>
#include <string.h>

int main(){
   char p[50];
   char p_[50];
   int verifica,n1,n2,prod;

   printf("introduza os nums(n1/n2):");scanf("%d %d",&n1,&n2);
   prod=n1*n2;
   sprintf(p,"%d",prod);
   sprintf(p_,"%d",prod);

   strcpy(p_,p);
   strcpy(p_,strrev(p));

   verifica=strcmp(p,p_);
   printf("ver: %d\n",verifica);
   if(verifica==0)
      printf("Nao e capicua");
   else
      printf("capicua");
   // puts(strrev(p));

   return 0;
}