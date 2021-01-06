/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 05/01/2021			**
**********************************/

#include <stdio.h>

void criarVetor(int *nums, int tamanhoNums)
{
    for (int i = 0, a = 100; i <= tamanhoNums; i++, a += 10)
    {
        nums[i] = a;
    }
}
void imprimir(int *nums, int tamanhoNums)
{
    printf("\nNumeros vetor:");
    for (int i = 0; i <= tamanhoNums; i++)
    {
        printf("\n\tNumero -> %d : %d", i, nums[i]);
    }
}

void main()
{
    int tamanhoNums = 9;
    int nums[tamanhoNums];
    criarVetor(nums, tamanhoNums);
    imprimir(nums, tamanhoNums);
}