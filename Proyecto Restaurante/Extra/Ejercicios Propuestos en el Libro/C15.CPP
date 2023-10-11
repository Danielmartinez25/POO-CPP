#include <stdio.h>
#include <conio.h>
int main()
{  int anterior,actual,siguiente,cont=1;
   clrscr();
   anterior =0;
   actual =1;
   printf("0, 1, ");
   while (cont<=15)
   {  siguiente = anterior + actual;
      printf("%d, ", siguiente);
      anterior = actual;
      actual = siguiente;
      cont++;
   }
  getch();      
  return 0;
}
