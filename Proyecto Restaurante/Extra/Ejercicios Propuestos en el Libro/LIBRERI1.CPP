#include <stdio.h>
#include <conio.h>
#include "propia.h"
void main()
{ int x1,y1,x2,y2;
  clrscr();
  printf("\nIngrese coordenada superior x y:"); scanf("%d%d",&x1,&y1);
  printf("\nIngrese coordenada inferior x y:"); scanf("%d%d",&x2,&y2);
  clrscr();
  cuadro(x1,y1,x2,y2);
  gotoxy(1,1);printf("Ingrese su edad:");soloint(&y1);
  gotoxy(1,2);printf("El cuadrado de la edad es: %d",cuadrado(y1));
  getch();
}
