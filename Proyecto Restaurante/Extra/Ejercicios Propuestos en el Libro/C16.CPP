#include <stdio.h>
#include <conio.h>
int main()
{  int anterior,actual,siguiente,cont=1;
   clrscr();
   anterior =0;
   actual =1;
   printf("0, 1, ");
   while (cont<=15)
   {  textcolor(cont);
      siguiente = anterior + actual;
      cprintf("%d, ", siguiente);
      anterior = actual;
      actual = siguiente;
      cont++;
   }
  getch();      
  return 0;
}
