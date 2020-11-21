/************************************************\
**    Nome: Trabalho de grupo 2                 **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 20/11/2020                          **
\************************************************/

#include<stdio.h>
#include <stdlib.h> 
#include <ctype.h>
#include <time.h> 

int main(int argc, char const *argv[])
{
    int i=0,num,Min=0,Max=100,contador=70,contPrimos=0,soma=0; 
    float media=0.0f;
    char escolha;
    srand(time(0));
    //enquanto o contador do ciclo for menor que o maximo de numeros a gerar
    while (i < contador){ 
        int primo=1;

        //expressao geral para gerar numeros aleatórios entre dois máximos
        num = (rand() % (Min - Max + 1)) + Min;
        
        //todos os numeros sao divisiveis por 1 e por ele próprio logo temos de testar
        //se num é divisivel por qualquer numero entre 2 e o num-1
        for (int a = 2; a <= num-1; a++){ 
            //se o resto for 0, ou seja existe um numero divisor de num no intervalo entre 2 e num-1
            if (num % a == 0) {
                primo=0;
                break;
            }
        }
        //partimos sempre do principio q o numero é primo, assim só quando se verifica que não é primo é que nao incrementamos
        if(primo==1){
            contPrimos++;
            soma+=num;
        }
        
        

        i++;

    }    
    printf("\nNumero gerado: %d",num);
    media=(float)soma/(float)contador;
    printf("\nMedia: %.2f",media);
    printf("1n soma: %d",soma);
    printf("\nNumeros primos: %d",contPrimos);

    return 0;



	
}
