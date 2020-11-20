#include <stdio.h>

//dados dois valores a e b passados por parâmetro, devolve o maior inteiro
int maior(int a, int b){
    if(a>b){
        return(a);
    }else{
        return(b);
    }
}
//Dadas as dimensões de um retângulo e devolve o seu perimetro
int perimetro(int largura, int altura){
   int p;
   p=(largura+altura)*2;
   return p;
}

void main()
{
    int resultado1, resultado2;

    resultado1 = maior(10,5);

    printf("O maior inteiro: %d\n",resultado1);

    resultado2 = maior(1,15);

    printf("O maior inteiro: %d\n",resultado2);

    int p;

    p = perimetro(10,20);
    printf("O perimetro do retângulo: %d",p);
    
}