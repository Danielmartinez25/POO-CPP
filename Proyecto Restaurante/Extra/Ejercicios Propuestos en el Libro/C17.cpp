#include <stdio.h>
#include <conio.h>
main() 
{ int tecla;
  clrscr();
   do{ tecla=getch();
       printf("%d\n",tecla);
   } while (tecla!=27);  //27 es el c�digo de la tecla Esc.
return 0;
}
