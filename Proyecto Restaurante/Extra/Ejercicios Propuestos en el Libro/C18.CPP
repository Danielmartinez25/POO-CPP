#include <stdio.h>
#include <conio.h>
main() 
{ int tabla, cont=1;
  clrscr();
   do{ printf("Ingrese un número entre 2 y 12:");
       scanf("%d",&tabla);
   } while (tabla<2 || tabla>12);
   do{
       printf("%d x %d = %d\n", tabla, cont, tabla*cont);
       cont++;
   } while (cont<=12);
   getch();
   return 0;
} 
