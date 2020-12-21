/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 00/00/2020			**
**********************************/

#include <stdio.h>
#include <string.h>

typedef struct data
{
    int Dia, Mes, Ano;
} DATA;
typedef struct pessoa
{
    char Nome[100];
    int Idade;
    float Salario;
    DATA Nasc;
} PESSOA;

void ler(PESSOA *ptr)
{
    fflush(stdin);
    printf("Qual o Nome         :");
    gets(ptr->Nome); //(&ptr).Nome mesma coisa
    printf("Qual a Idade        :");
    scanf("%d", &ptr->Idade); //&(*ptr).Idade
    printf("Qual o Salario      :");
    scanf("%f", &ptr->Salario); //&(*ptr).Salario
    printf("Qual a Data Nascim. :");
    scanf("%d %d %d", &ptr->Nasc.Dia, &ptr->Nasc.Mes, &ptr->Nasc.Ano); // &(*ptr).Nasc.Dia, &(*ptr).Nasc.Mes, &(*ptr).Nasc.Ano
}
void mostrar(PESSOA x)
{
    printf("Nome \t:%s\n", x.Nome);
    printf("Idade \t:%d\n", x.Idade);
    printf("Salario :%.2f\n", x.Salario);
    printf("Nasc \t:%d/%d/%d\n", x.Nasc);
}
void main()
{
    //PESSOA p = {"Carlos", 23, 12345.67, {23, 5, 2020}};
    PESSOA p[3] = {
        {"Carlos", 23, 12345.67, {23, 5, 2020}},
        {"Maria", 37, 3345.67, {31, 2, 2021}},
        {"Antonio", 54, 50345.67, {4, 4, 2077}}};

    for (int i = 0; i <= 2; i++)
    {
        ler(&p[i]);
    }

    for (int i = 0; i <= 2; i++)
    {
        mostrar(p[i]);
    }
    /*mostrar(p);
    puts("\n");
    ler(&p);
    puts("\n");
    mostrar(p);*/
}