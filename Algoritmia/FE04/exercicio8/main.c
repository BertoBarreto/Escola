/*********************************
**    Nome: verificaPrimo       **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include <stdio.h>

int verificaPrimo(int numero);
void mostra(int numero, int primo);

void mostra(int numero, int primo)
{
    if (primo == 0)
        printf("\nO numero %d nao e primo", numero);
    else
        printf("\nO numero %d e primo", numero);
}

int verificaPrimo(int numero)
{
    int primo = 1;
    //todos os numeros sao divisiveis por 1 e por ele próprio logo temos de testar
    //se num é divisivel por qualquer numero entre 2 e o num-1
    for (int a = 2; a <= numero - 1; a++)
    {
        //se o resto for 0, ou seja existe um numero divisor de num no intervalo entre 2 e num-1
        if (numero % a == 0)
        {
            primo = 0;
            break;
        }
    }
    //partimos sempre do principio q o numero é primo, assim só quando se verifica que não é primo é que nao incrementamos
    return primo;
}

void main()
{
    int num1, num2, primo;

    printf("Introduza o intervalo: ");
    scanf("%d;%d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
        mostra(i, verificaPrimo(i));
}