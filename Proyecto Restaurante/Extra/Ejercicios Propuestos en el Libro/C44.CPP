#include<stdio.h>
#include<stdlib.h>
int cuadrado(int num);
main()
{ int a, b;
  system("cls");
  printf("Ingrese un n£mero: ");scanf("%d",&a);
  printf("Ingrese otro n£mero: ");scanf("%d",&b);
  printf("Cuadrado 1er n£mero es: %d\n",cuadrado(a));
  printf("Cuadrado 2do n£mero es: %d\n",cuadrado(b));
  system("pause");
  return 0;
}
int cuadrado(int num)
{ return num*num;
}
