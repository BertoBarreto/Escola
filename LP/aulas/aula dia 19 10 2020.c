#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

// funçao que dados tres valores inteiros devolve o maior
int maior3(int valor1, int valor2, int valor3)

{
    if ((valor1 >= valor2) && (valor1 >= valor3)) return(valor1);
    else if ((valor2 > valor1) && (valor2 > valor3)) return(valor2);
    else return(valor3);
}

// funçao para obtençao da media aritmetica de dois valores inteiros
float media(int valor1, int valor2)

{ float m;
m = (valor1+valor2)/2;
 return(m);
}

void main()

{ int v1, v2, v3, res,m ;
    printf("indique o primeiro valor?");
    scanf("%d",&v1); // ler um inteiro e armazena-lo na variavel v1
     printf("indique o segund0 valor?");
    scanf("%d",&v2); // ler um inteiro e armazena-lo na variavel v2
     printf("indique o terceiro valor?");
    scanf("%d",&v3); // ler um inteiro e armazena-lo na variavel v3
res = maior3(v1,v2,v3); //atribuiçao do resultado da funçao maior3 á variavel res

printf(" o maior: %d\n", res); //escrita de um inteiro
m = media(v1,v2);
printf("media: %.2f", media(v1, v2)); // escrita de um real
printf("abc %d def %d %.2f %d %3.f\n",v3, v2, m, v1, m );



}
