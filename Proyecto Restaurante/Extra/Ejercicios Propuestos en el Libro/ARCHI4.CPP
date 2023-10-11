#include <stdio.h>
#include <stdlib.h>
main()
{ FILE *pa;
  char caracter;
  system("cls");
  pa = fopen("primero.txt","r");
  printf( "Contenido del Archivo:\n" );
  caracter = getc(pa);
  while (feof(pa) == 0) {
	printf("%c",caracter);
	caracter = getc(pa);
  }
  fclose(pa);
  printf("\n");
  system("Pause");
  return 0;
}