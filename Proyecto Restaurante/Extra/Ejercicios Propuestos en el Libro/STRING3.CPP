#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{ char frase[100];
  system("cls");
  printf("Ingrese una frase:");
  gets(frase);
  printf("Lo ingresado es:\n %s \n",frase);
  printf("La frase tiene %d caracteres\n",strlen(frase));
  system("pause");
  return 0;
}