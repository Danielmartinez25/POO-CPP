#include<stdio.h>
#include<stdlib.h>
main()
{ char frase[30];
  system("cls");
  printf("Ingrese una frase:");
  gets(frase);
  printf("Lo ingresado es:\n %s \n",frase);
  system("pause");
  return 0;
}