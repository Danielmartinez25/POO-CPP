#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{ FILE *pa;
  int opc;
  char linea[60];
  do{
   clrscr();
   printf("<1> Agregar nueva linea\n<2> Mostrar lineas grabadas:\n");
   printf("<3> Salir\nSeleccione su opcion:\n");
   do{ opc=getch(); }while(opc!=49 && opc!=50 && opc!=51);
   switch(opc){
      case 49: pa = fopen("primero.txt", "at");
	       printf("Ingrese una linea de texto para almacenarla en el disco:\n\n");
               gets(linea);
               fprintf(pa, "%s\n", linea);
               fclose(pa);
               break;
      case 50: pa = fopen("primero.txt", "rt");
               do{ fgets(linea, 60, pa);
		   printf("%s\n",linea);
               }while (!feof(pa));
               fclose(pa);
               getch();
   }
   }while(opc!=51);
   return 0;
}
