#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{ char frase[100],frase2[100];
  system("cls");
  printf("Ingrese una frase:");
  gets(frase);
  printf("Lo ingresado es:\n %s \n",frase);
  printf("La frase tiene %d caracteres\n",strlen(frase));
  strcpy(frase2,frase);
  printf("Lo copiado es:\n %s \n",frase2);
  system("pause");
  return 0;
}