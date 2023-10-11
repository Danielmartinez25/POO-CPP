#include <stdio.h>
#include <conio.h>
  /* Caracteres para doble l¡nea
   Alt 205="Í" 201="É" 200="È" 187="»" 188="¼" 186="º" */
void cuadro(int,int,int,int);
void main()
{ int x1,y1,x2,y2;
  clrscr();
  printf("\nIngrese coordenada superior x y:"); scanf("%d%d",&x1,&y1);
  printf("\nIngrese coordenada inferior x y:"); scanf("%d%d",&x2,&y2);
  clrscr();
  cuadro(x1,y1,x2,y2);
  getch();
  }
void cuadro(int xs, int ys, int xi, int yi)
{ int i;
//Dibujar lineas horizontales superior e inferior
 for(i=xs ; i<xi ; i++){
      gotoxy(i,ys);cprintf("Ä"); // Alt 196="Ä"
      gotoxy(i,yi);cprintf("Ä");
     }
//Dibujar lineas verticales izquierda y derecha
 for(i=ys ; i<yi ; i++){
      gotoxy(xs,i);cprintf("³"); //Alt 179="³"
      gotoxy(xi,i);cprintf("³");
     }
//Dibujar las esquinas del cuadro
gotoxy(xs,ys);cprintf("Ú");  // Alt 218="Ú"
gotoxy(xs,yi);cprintf("À");  // Alt 192="À"
gotoxy(xi,ys);cprintf("¿");  // Alt 191="¿"
gotoxy(xi,yi);cprintf("Ù");  // Alt 217="Ù"
}
