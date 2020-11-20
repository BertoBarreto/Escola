#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

// Protótipos
float bonus(int filhos, int antiguidade);
void guardar(int filhos, int antiguidade, float bonus);
void guardarBin(int filhos, int antiguidade, float bonus);
void ler();
void lerBin();

// Implementações

float bonusFinal(int filhos, int antiguidade)
{return(20*filhos+10*antiguidade);
}

// Armazenamento dos dados em ficheiro de texto
void guardar(int filhos, int antiguidade, float bonus)
{FILE * f;
 f = fopen("dados.txt","a");
 fprintf(f,"%d;%d;%.f\n",filhos,antiguidade,bonus);
 fclose(f);
}

void guardarBin(int filhos, int antiguidade, float bonus)
{FILE * f;
 f = fopen("dados.bin","ab");
 fwrite(&filhos,sizeof(int),1,f);
 fwrite(&antiguidade,sizeof(int),1,f);
 fwrite(&bonus,sizeof(float),1,f);
 fclose(f);
}

void ler()
{FILE * f;
 int filhos, antiguidade, res, contador=0, somaFilhos=0,
     somaAntiguidade=0;
 float bonus, somaBonus=0, bonusMaior=0;
 f = fopen("dados.txt","r");

 while (!feof(f)) // feof devolve 0 ou 1
 {res = fscanf(f,"%d;%d;%f\n",&filhos, &antiguidade, &bonus);
  contador = contador + 1;
  somaFilhos = somaFilhos + filhos;
  somaAntiguidade += antiguidade;
  somaBonus += bonus;
  if (bonusMaior<bonus) bonusMaior = bonus;
 }
 
 printf("Media filhos: %.2f\n",(float)somaFilhos/contador);
 printf("Media antiguidade: %.2f\n",(float)somaAntiguidade/contador);
 printf("Media bonus: %.2f\n",(float)somaBonus/contador);
 printf("Bonus maior: %.2f\n",bonusMaior);

 fclose(f);
}

void lerBin()
{FILE * f;
 int filhos, antiguidade;
 float bonus;
 f = fopen("dados.bin","rb");

 while (!feof(f)) // feof devolve 0 ou 1
 {int r1, r2, r3;
  r1 = fread(&filhos,sizeof(int),1, f);
  r2 = fread(&antiguidade,sizeof(int),1, f);
  r3 = fread(&bonus,sizeof(float),1, f);
  if ((r1!=0)&&(r2!=0)&&(r3!=0)) 
	  printf("%d %d %.2f\n",filhos,antiguidade,bonus);
 }
 fclose(f);
}


void main()
{/*int filhos, antiguidade;
 float bonus;
 printf("Filhos?");
 scanf("%d",&filhos);
 printf("Antiguidade?");
 scanf("%d",&antiguidade);
 bonus = bonusFinal(filhos, antiguidade);
 printf("Bonus final: %.f",bonus);
 guardarBin(filhos, antiguidade, bonus);
 //ler();
 */
 lerBin();
}

