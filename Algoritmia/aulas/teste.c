/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 16/12/2020			**
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define TAMANHO 50

void listarArrayInteiros(int *numeros, int n);
int somaArrayInteiros(int *numeros, int n);
float mediaArrayInteiros(int *numeros, int n);
int maiorNumeroInteiro(int *numeros, int n);
int menorNumeroInteiro(int *numeros, int n);
void ordenaArrayInteiroAsc(int *numeros, int n);
void ordenaArrayInteiroDesc(int *numeros, int n);

int main(int argc, char const *argv[])
{
    /* int idades[TAMANHO], idade, contador = 0, indice;

    puts("Insira uma idade negativa para sair.");
    printf("IDADE: ");
    scanf("%d", &idade);

    while (idade >= 0 && contador < TAMANHO) //não pode
    {
        idades[contador] = idade;
        contador++;

        puts("Insira uma idade negativa para sair.");
        printf("IDADE: ");
        scanf("%d", &idade);
    }

    listarArrayInteiros(idades, contador);
    printf("SOMA: %d\n", somaArrayInteiros(idades, contador));

    if (contador > 0)
    {
        printf("MEDIA: %f\n", mediaArrayInteiros(idades, contador));
        printf("Maior: %f\n", maiorNumeroInteiro(idades, contador));
    }
    else
    {
        puts("Não foi possivel apresentar resultados");
    }

    ordenaArrayInteiroAsc(idades, contador);
    listarArrayInteiros(idades, contador);

    printf("Elemento a pesquisar: ");
    scanf("%d", &idade);

    indice = pesquisaNumeroArrayInteiros(idades, contador, idade);

    if (indice >= 0)
    {
        printf("Posicao: %d", indice);
    }
    else
    {
        puts("Não existe o elemento");
    }

    /* code */

    int Cartucho[7] = {19, 30, 29, 69, 17, 29, 39};
    ordenaArrayInteiroAsc(Cartucho, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("\n%d", Cartucho[i]);
    }

    return 0;
}
//lista os valores de um array de inteiros
//@numeros: array de inteiros
//@n: numero de elementos existentes no array
void listarArrayInteiros(int *numeros, int n)
{
    //percorre todos os elementos do array
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", numeros[i]); //imprime
    }
} //igual ao ex q fizemos

//Soma os elementos de um array de inteiros
int somaArrayInteiros(int *numeros, int n)
{
    int resultado = 0;

    for (int i = 0; i <= n; i++)
    {
        resultado += numeros[i];
    }
    return resultado;
}

//calcula a media dos valores de um array de inteiros
//obs: não trata a divisão por zero
float mediaArrayInteiros(int *numeros, int n)
{
    float resultado;
    int soma;

    soma = somaArrayInteiros(numeros, n);

    resultado = (float)soma / n;

    return resultado;
}

//não trata n = 0;
int maiorNumeroInteiro(int *numeros, int n)
{
    int maior;

    maior = numeros[0];

    for (int i = 1; i <= n; i++)
    {
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }
    }

    return maior;
}

int menorNumeroInteiro(int *numeros, int n)
{
    int menor;

    menor = numeros[0];

    for (int i = 1; i < n; i++)
    {
        if (menor > numeros[i])
        {
            menor = numeros[i];
        }
    }

    return menor;
}

void ordenaArrayInteiroAsc(int *numeros, int n)
{
    int aux;
    //verifica o agora e o seguinte:i->agora
    for (int i = 0; i < n - 1; i++)
    {
        //verifica o agora e o seguinte:j->seguinte e guarda o numero da posição I
        for (int j = i + 1; j < n; j++)
        {
            //se o agora for maior q o seguinte, trocam de lugar
            if (numeros[i] > numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
}

void ordenaArrayInteiroDesc(int *numeros, int n)
{
    int aux;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numeros[i] < numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
}

int pesquisaNumeroArrayInteiros(int *numeros, int n, int elemento)
{
    int i = 0;

    while (i < n && numeros[i] != elemento)
    {
        i++;
    }

    if (i >= n)
    {
        i = -1;
    }
    return i;
}
