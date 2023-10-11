#include <stdio.h>
#include <stdlib.h>
int main()
{  FILE *pa;
   char linea[70];
   system("cls");
   pa = fopen("primero.txt", "wt");
   printf("Ingrese una linea de texto para almacenarla en el disco:\n");
   gets(linea);
   fprintf(pa, "%s\n", linea);
   fclose(pa);
   return 0;
}
