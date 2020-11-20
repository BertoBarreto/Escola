#include <stdio.h>

int soma(int a, int b)
{return(a+b);
}

void curso(int valor)
{printf("%d\n",valor);
}

void f()
{printf("ESI\n");
}

void main()
{
 printf("IPCA\n");

 f();
 curso(100);
 curso(110);
 curso(120);
 f();
 f();
 printf("%d\n",soma(10,20));
}