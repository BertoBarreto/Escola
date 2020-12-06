/*********************************
**    Nome: Cifra/Descifra		**
**    Autor: Roberto Barreto	**
**    Data: 06/12/2020			**
**********************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cifra(int dig);
int descifra(int cifra);

int cifra(int dig)
{
    char str[1], cifraFinal[3];
    int num, cifraNum, numDig;

    //inverter o numero recebido colocando em string e invertendo
    sprintf(str, "%d", dig);
    strrev(str);

    //colocar o numero invertido em inteiro
    dig = atoi(str);
    //ver os 4 digitos
    for (int i = 0; i < 4; i++)
    {
        //o ultimo digito de qualquer numero é obetido pelo resto do mesmo por 10
        numDig = dig % 10;

        //cifrar o digito utilizando a formula da ficha
        cifraNum = (numDig + 8) % 10;

        //colocar o digito em string para depois conseguir guardar o numero na sua posicção correta de uma string logo é necessário char para char
        sprintf(str, "%d", cifraNum);

        //colocar o digito cifrado no seu correto local da string
        cifraFinal[i] = str[0];

        //retirar o ultimo digito do numero, pois este já foi cifrado
        dig = dig / 10;
    }

    //retornar o numero final em inteiro
    return atoi(cifraFinal);
}

int descifra(int cifra)
{
    int digCifra, descifraDig;
    char str[1], descifraFinal[3];
    //ver os 4 digitos
    for (int i = 0; i < 4; i++)
    {
        //o ultimo digito de qualquer numero é obetido pelo resto do mesmo por 10
        digCifra = cifra % 10;

        /*  
            no máximo vamos obeter digito 9 e como 0+8 e 1+8 dá um numero abaixo de 10 e como para qualquer n abaixo de 10 -> n%10=n
            entao como 8+1=9 e 8+0=8 os numeros 0 e 1 são obtidos ao retirar 8 a qualquer numero acima de 7
            já o resto obtem-se adicionando 2 ao numero
        */
        if (digCifra <= 7)
            descifraDig = digCifra + 2;
        else
            descifraDig = digCifra - 8;

        //retirar o ultimo digito do numero, pois este já foi cifrado
        cifra = cifra / 10;

        //colocar o digito em string para depois conseguir guardar o numero na sua posicção correta de uma string logo é necessário char para char
        sprintf(str, "%d", descifraDig);

        //colocar o digito descifrado no seu correto local da string
        descifraFinal[i] = str[0];
    }
    //colocar o numero invertido e em inteiro
    strrev(descifraFinal);
    return atoi(descifraFinal);
}

void menu()
{
    int escolha, n;
    printf("\n*******************");
    printf("\n** \tMenu\t **");
    printf("\n** 1-Cifrar\t **");
    printf("\n** 2-Descifrar\t **");
    printf("\n*******************");
    printf("\nOpcao: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nIntroduza o numero: ");
        scanf("%d", &n);
        printf("\nCifra: %d\n", cifra(n));
        break;
    case 2:
        printf("\nIntroduza o numero: ");
        scanf("%d", &n);
        printf("\nDescifra: %d\n", descifra(n));
        break;

    default:
        printf("Erro");
        break;
    }

    menu();
}

void main()
{
    menu();
}