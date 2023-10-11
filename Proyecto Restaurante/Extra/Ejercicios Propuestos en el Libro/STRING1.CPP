#include<stdio.h>
#include<stdlib.h>
main()
{ char frase[40];
  system("cls");
  printf("Ingrese una frase:");
  scanf("%s",frase);
  printf("Lo ingresado es:\n %s \n",frase);
  system("pause");
  return 0;
}