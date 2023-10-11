#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int total_palabras(char *texto)
{ int cp=0;
   for (int i=0;i<strlen(texto);i++) {
     while (texto[i]!=' ') i++;
     if (i != 0) cp++;
     while (texto[i]==' ') i++;
    }
   return cp;
}
void main()
{ int i, tecla, res; 
  char *frase;
  system("cls");
  printf("Ingrese una frase: ");  gets(frase);
  printf("Tiene: %d palabras\n", total_palabras(frase));
  system("pause");
}
