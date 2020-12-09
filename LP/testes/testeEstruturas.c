/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 00/00/2020			**
**********************************/

#include <stdio.h>
#include <string.h>
struct teste
{
    char nome[50];
    int idade;
    char sexo;
} testeEu, teste2 = {"Roberto", 18, 'M'}; //declaração de var da estrutura ao criar a mesma
typedef struct teste testeEstrutura;      // a estrutura agora basta ser chamada por "testeEstrutura" e nao "struct teste
//outra forma de fazer o typedef desta estrutura
typedef struct teste500
{
    char nome[50];
    int idade;
    char sexo;
} teste30;
void main()
{

    // ?utilização de estruturas normal sem typeDef
    struct teste teste1 = {"Bertolis", 18, 'M'}; //declaração de var da estrutura adiante

    struct teste teste3[3] =
        {
            {"RobertoBarreto", 18, 'M'},
            {"RobertoBarreto1", 18, 'M'},
            {"RobertoBarreto2", 18, 'M'}}; //declaração de um vetor da estrutura(lista)

    strcpy(testeEu.nome, "Berto");
    testeEu.sexo = 'M';
    testeEu.idade = 100;
    printf("\n%s;%c;%d", testeEu.nome, testeEu.sexo, testeEu.idade);
    printf("\n%s;%c;%d", teste2.nome, teste2.sexo, teste2.idade);
    printf("\n%s;%c;%d", teste1.nome, teste1.sexo, teste1.idade);
    //print do vetor da estrutura criado
    for (int i = 0; i <= 3; i++)
        printf("\n%s;%c;%d", teste3[i].nome, teste3[i].sexo, teste3[i].idade);
}