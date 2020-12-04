#include<stdio.h>

void verificaPrimo(int numero);

void verificaPrimo(int numero){
    int primo=1;
    //todos os numeros sao divisiveis por 1 e por ele próprio logo temos de testar
    //se num é divisivel por qualquer numero entre 2 e o num-1
    for (int a = 2; a < numero; a++){ 
    //se o resto for 0, ou seja existe um numero divisor de num no intervalo entre 2 e num-1
        if (numero % a == 0) {
            primo=0;
            printf("O numero nao e primo");
            break;
        }
    }
    //partimos sempre do principio q o numero é primo, assim só quando se verifica que não é primo é que nao incrementamos
    if(primo==1){
        printf("O numero e primo");
    }
}

void main(){
    int num; 

    printf("Introduza o numero: ");scanf("%d",&num);

    verificaPrimo(num);   
    
}